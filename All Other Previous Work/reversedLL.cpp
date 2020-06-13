#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
Node* next;
int data;
};
int main()
{
    int n,a;
    cin>>n;
    Node* head;
    Node* newNode= new Node;
    cin>>a;
    newNode->data=a;
    newNode->next=NULL;
    head=newNode;
                        
                            
    while((n-1)!=0)
    {   n--;
        Node* newN= new Node;
        cin>>a;
        newN->data=a;
        newN->next=NULL;
        newNode->next=newN;
        newNode=newN;
 
    }
    Node *temp=head;
    cout<<"Original Linked List:-"<<endl;
    //Printing the Original Linked List
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    int ct=0;
    temp=head;
    Node *temp1,*temp2,*ptemp;
    //cout<<"Reversed Linked List:-"<<endl;
    while(temp->next!=NULL)
    {
        if(temp==head && ct==0){
            ct=1;
            if(temp->data%2==0 && temp->next->data%2==0)
            {
                temp1=temp;
                temp2=temp->next->next;
                
                temp=temp->next;
                temp->next=temp1;
                temp1->next=temp2;
                head=temp;
                //cout<<temp->data<<" "<<temp->next->data<<""<<temp->next->next->data;
            }
                
                
        }        
        

        else{
            if(temp->next->data%2==0 && temp->next->next->data%2==0)
            {
                //ptemp=temp;
                temp1=temp->next;
                temp2=temp->next->next->next;
                
                temp->next=temp->next->next;
                temp->next->next=temp1;
                temp1->next=temp2;
                
                temp=temp->next;
                cout<<"k";
            }
        }
        cout<<"k";
    } 

    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }



}