#include<iostream>
using namespace std;
class Node
{
    public:
    double data;
    Node* next;
};

class List{
    public:
        List (void){head=NULL;}
        ~List(void);

        bool IsEmpty(){
            return head=NULL;}
        Node* InsertNode(int index,double x);
        int FindNode(double x);
        int DeleteNode(double x);
        void DisplayList(void);
    private:
        Node * head;
};

Node* List::InsertNode(int index,double x){
    if(index<0) return NULL;

    int curIndex=1;
    Node* curNode=head;
    while(curNode && index>curIndex){
        curNode = curNode->next;
        curIndex++;
    } 
    if(index>0 && curNode==NULL) return NULL;

    Node* newNode = new Node;
    newNode->data=x;
    //Insertion at the starting Position
    if(index==0){
        newNode->next=head;
        head=newNode;
           }
    else{       
    newNode->next=curNode->next;
    curNode->next=newNode;
    }
    return newNode;
}

int List::FindNode(double x){
    Node* curNode=head;
    int curIndex=1;
    while(curNode && curNode->data!=x)
    {
        curNode=curNode->next;
        curIndex++;
    }
    if(curNode) return curIndex;
    return 0;
}

int List::DeleteNode(double x)
{
    Node* prevNode=NULL;
    Node* curNode=NULL;
    int curIndex=1;
    while(curNode && curNode->data!=x){
        prevNode=curNode;
        curNode=curNode->next;
        curIndex++;
    }

    if(curNode){
        if(prevNode){
            prevNode->next=curNode->next;
            delete curNode;
            }
        else
        {
            head=curNode->next;
            delete curNode;
        }
    return curIndex;
    }
   return 0;
}

void List::DisplayList()
{
    int num =0;
    Node * curNode=head;
    while(curNode!=NULL){
        cout<<curNode->data<<endl;
        curNode=curNode->next;
        num++;
        }
        cout<<"Number of Nodes in the list are:"<<num<<endl;

}

List::~List(void){
    Node* curNode=head,*nextNode=NULL;
    while(curNode!=NULL)
    {
        nextNode=curNode->next;
        delete curNode;
        curNode=nextNode;
    }
}


int main()
{
List list;
list.InsertNode(0, 7.0);
list.InsertNode(1, 5.0);
list.InsertNode(-1, 5.0);
list.InsertNode(0, 6.0);
list.InsertNode(8, 4.0);
list.DisplayList();

if(list.FindNode(5.0) > 0)
cout << "5.0 found" << endl;

else
cout << "5.0 not found" << endl;

if(list.FindNode(4.5) > 0) cout << "4.5 found" << endl;

else
cout << "4.5 not found" << endl;

list.DeleteNode(7.0);
list.InsertNode(0, 54.0);
list.DisplayList();

return 0;
}