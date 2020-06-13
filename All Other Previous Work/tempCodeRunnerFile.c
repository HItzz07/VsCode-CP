#include<stdio.h>
#include<ctype.h>
#include<string.h>

void followFirst(char , int , int);
void findFirst(char , int , int);
void follow(char);

int noProd,n=0,m=0,k,e;
char calculateFirst[10][100] , calculateFollow[10][100],production[10][10];
char cd, first[10] ,f[10];

int main(int argc,char **argv)
{
	int counter1=0,counter2=0,row;
	char c,ch;
	printf("Enter the number of Productions :");
	scanf("%d",&noProd);
	printf("\nEnter %d productions in form A=B one at a time without | where A and B are grammar symbols :\n\n",noProd);
	for(row=0;row<noProd;row++)
	{
		scanf("%s%c",production[row],&ch);
	}
	int col;
	char done[noProd];
	int ptr = -1;
	for(k=0;k<noProd;k++){
		for(col=0;col<100;col++){
			calculateFirst[k][col] = '!';
		}
	}
	int point1 = 0,point2,flag1;
    printf("First\n---------");
	for(k=0;k<noProd;k++)
	{
		c=production[k][0];
		point2 = 0;
		flag1 = 0;
		for(col = 0; col <= ptr; col++)
			if(c == done[col])
				flag1 = 1;
		if (flag1 == 1)
			continue;
		findFirst(c,0,0);
		ptr+=1;
		done[ptr] = c;
		printf("\n First(%c)= { ",c);
		calculateFirst[point1][point2++] = c;
		for(row=0+counter1;row<n;row++){
			int col2 = 0,chk = 0;
			for(col2=0;col2<point2;col2++){
				if (first[row] == calculateFirst[point1][col2]){
					chk = 1;
					break;
				}
			}
			if(chk == 0){
				printf("%c, ",first[row]);
				calculateFirst[point1][point2++] = first[row];
			}
		}
		printf("}\n");
		counter1=n;
		point1++;
	}
	printf("\n");
	printf("-----------------------------------------------\n\n");
    printf("Follow\n---------\n");
	char donee[noProd];
	ptr = -1;
	for(k=0;k<noProd;k++){
		for(col=0;col<100;col++){
			calculateFollow[k][col] = '!';
		}
	}
	point1 = 0;
	int count2 = 0;
	for(e=0;e<noProd;e++)
	{
		cd=production[e][0];
		point2 = 0;
		flag1 = 0;
		for(col = 0; col <= ptr; col++)
			if(cd == donee[col])
				flag1 = 1;
		if (flag1 == 1)
			continue;
		count2 += 1;
		follow(cd);
		ptr+=1;
		donee[ptr] = cd;
		printf(" Follow(%c) = { ",cd);
		calculateFollow[point1][point2++] = cd;
		for(row=0+counter2;row<m;row++){
			int col2 = 0,chk = 0;
			for(col2=0;col2<point2;col2++){
				if (f[row] == calculateFollow[point1][col2]){
					chk = 1;
					break;
				}
			}
			if(chk == 0){
				printf("%c, ",f[row]);
				calculateFollow[point1][point2++] = f[row];
			}
		}
		printf(" }\n\n");
		counter2=m;
		point1++;
	}
	char terminal[10];
	for(k=0;k<10;k++){
		terminal[k] = '!';
	}
	int flag2,lim = 0;
	for(k=0;k<noProd;k++){
		for(col=0;col<noProd;col++){
			if(!isupper(production[k][col]) && production[k][col]!= '#' && production[k][col] != '=' && production[k][col] != '\0'){
				flag2 = 0;
				for(row = 0;row < lim; row++){
					if(production[k][col] == terminal[row]){
						flag2 = 1;
						break;
					}
				}
				if(flag2 == 0){
					terminal[lim] = production[k][col];
					lim ++;
				}
			}
		}
	}
	terminal[lim] = '$';
	lim++;
	printf("\n\t\t\t\t\t\t\t The LL(1) Parsing Table for the above grammer :-");
	printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t\t|\t");
	for(row = 0;row < lim; row++){
		printf("%c\t\t",terminal[row]);
	}
	printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char first_prod[noProd][lim];
	for(row=0;row<noProd;row++){
		int lim2 = 0;
		k = 2;
		int ct = 0;
		char temp[100];
		while(production[row][k] != '\0'){
			if(!isupper(production[row][k])){
				temp[ct++] = production[row][k];
				temp[ct++] = '_';
				temp[ct++] = '\0';
				k++;
				break;
			}
			else{
				int row2=0;
				int col = 0;
				for(row2=0;row2<noProd;row2++){
					if(calculateFirst[row2][0] == production[row][k]){
						for(col=1;col<100;col++){
							if(calculateFirst[row2][col] != '!'){
								temp[ct++] = calculateFirst[row2][col];
							}
							else
								break;
						}
						break;
					}
				}
				temp[ct++] = '_';
			}
			k++;
		}
		int flag1 = 0,col;
		for(col = 0;col<ct;col++){
			if(temp[col] == '#'){
				flag1 = 1;
			}
			else if(temp[col] == '_'){
				if(flag1 == 1){
					flag1 = 0;
				}
				else
					break;
			}
			else{
				first_prod[row][lim2++] = temp[col];
			}
		}
	}
	char table[count2][lim+1];
	ptr = -1;
	for(row = 0; row < count2 ; row++){
		for(col = 0; col < (lim + 1) ; col++){
			table[row][col] = '!';
		}
	}
	for(row = 0; row < noProd ; row++){
		cd = production[row][0];
		flag1 = 0;
		for(col = 0; col <= ptr; col++)
			if(cd == table[col][0])
				flag1 = 1;
		if (flag1 == 1)
			continue;
		else{
			ptr = ptr + 1;
			table[ptr][0] = cd;
		}
	}
	for(row = 0; row < noProd ; row++){
		int col = 0;
		while(first_prod[row][col] != '\0'){
			int lim1,flag3=0;
			for(lim1=0;lim1<lim;lim1++){
				if(first_prod[row][col] == terminal[lim1]){
					flag3 = 1;
				}
			}
			if(flag3 == 1){
				char ch1 = production[row][0];
				int row1=0;
				while(table[row1][0] != ch1){
					row1 = row1 + 1;
				}
				int col1=0;
				while(terminal[col1] != first_prod[row][col]){
					col1 = col1 + 1;
				}
				table[row1][col1+1] = (char)(row + 65);
			}
			col++;
		}
	}
	for(k=0;k<lim;k++){
		for(col=0;col<100;col++){
			if(calculateFirst[k][col] == '!'){
				break;
			}
			else if(calculateFirst[k][col] == '#'){
				int col2 = 1;
				while(calculateFollow[k][col2] != '!'){
					char ch1 = production[k][0];
					int row1=0;
					while(table[row1][0] != ch1){
						row1 = row1 + 1;
					}
					int col1=0;
					while(terminal[col1] != calculateFollow[k][col2]){
						col1 = col1 + 1;
					}
					table[k][col1+1] = '#';
					col2++;
				}
				break;
			}
		}
	}
	for(row = 0; row < count2 ; row++){
		printf("\t\t\t   %c\t|\t",table[row][0]);
		for(col = 1; col < (lim + 1) ; col++){
			if(table[row][col] == '!')
				printf("\t\t");
			else if(table[row][col] == '#')
				printf("%c=#\t\t",table[row][0]);
			else{
				int tempVar = (int)(table[row][col]);
				tempVar -= 65;
				printf("%s\t\t",production[tempVar]);
			}
		}
		printf("\n");
		printf("\t\t\t---------------------------------------------------------------------------------------------------------------------");
		printf("\n");
	}
	
printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void follow(char c)
{
	int row ,j;
	if(production[0][0]==c){
		f[m++]='$';
	}
	for(row=0;row<10;row++)
	{
		for(j=2;j<10;j++)
		{
			if(production[row][j]==c)
			{
				if(production[row][j+1]!='\0'){
					followFirst(production[row][j+1],row,(j+2));
				}
				if(production[row][j+1]=='\0'&&c!=production[row][0]){
					follow(production[row][0]);
				}
			}  
		}
	}
}

void findFirst(char c ,int q1 , int q2)
{
	int j;
	if(!(isupper(c))){
		first[n++]=c;
	}
	for(j=0;j<noProd;j++)
	{
		if(production[j][0]==c)
		{
			if(production[j][2]=='#'){
				if(production[q1][q2] == '\0')
					first[n++]='#';
				else if(production[q1][q2] != '\0' && (q1 != 0 || q2 != 0))
				{
					findFirst(production[q1][q2], q1, (q2+1));
				}
				else
					first[n++]='#';
			}
			else if(!isupper(production[j][2])){
				first[n++]=production[j][2];
			}
			else {
				findFirst(production[j][2], j, 3);
			}
		}
	}
}

void followFirst(char c, int c1 , int c2)
{
	int k;
	if(!(isupper(c)))
		f[m++]=c;
	else{
		int row=0,j=1;
		for(row=0;row<noProd;row++)
		{
			if(calculateFirst[row][0] == c)
				break;
		}
		while(calculateFirst[row][j] != '!')
		{
			if(calculateFirst[row][j] != '#'){
				f[m++] = calculateFirst[row][j];
			}
			else{
				if(production[c1][c2] == '\0'){
					follow(production[c1][0]);
				}
				else{
					followFirst(production[c1][c2],c1,c2+1);
				}
			}
			j++;
		}
	}
}
