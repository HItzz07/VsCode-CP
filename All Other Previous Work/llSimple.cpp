#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    double data;
    Node *next;
};

int main()
{
    int n,d;
    cin>>n;
    cin>>d;
    Node* head;
    Node* newNode = new Node;
    newNode->data=d;
    newNode->next=NULL;
    head=newNode;
    newNode=newNode->next;

     for(int i=1;i<n;i++)
    {   Node* newN = new Node;
        cin>>d;
        newNode->data=d;
        newNode->next=NULL;
        newNode=newNode->next;
    }
    Node* temp= new Node;
    temp=head;

    while(temp->data!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    
    
}