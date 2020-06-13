#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next=NULL;
    };

class linkedList{
    public:
    Node *head;
    Node *last;
    int length;
    linkedList(){
        head=NULL;
        last=NULL;
        length=0;
    }
    ~linkedList(){};

    bool isEmpty(){
    return head==NULL?true:false;
    }
    void createLinkedList(int d);
    void insertAtStart(int d);
    void insertAtEnd(int d);
    void insertAtOther(int d,int pd);
    void deleteFromStart();
    void deleteFromEnd();
    void deleteFromOther(int pd);
    void displayList();

};

void linkedList::createLinkedList(int d){
    if(head==NULL){
        Node *temp=new Node;
        temp->data=d;
        head=temp;
        last=temp;
    }
    else{
        Node *temp=new Node;
        temp->data=d;
        temp->next=NULL;
        last->next=temp;
        last=last->next;
    }
}

void linkedList::insertAtStart(int d){
    Node *temp=new Node;
    Node *temp1,*temp2;
    temp1=head;
    temp->data=d;
    temp->next=temp1;
    head=temp;
}

void linkedList::insertAtEnd(int d){
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

     Node *temp1=new Node;
     temp1->data=d;
     temp1->next=NULL;
     temp->next=temp1;

}

void linkedList::insertAtOther(int d,int pd){
    Node *temp=head;
    while(temp->data!=pd){
        temp=temp->next;
    }

     Node *temp1=new Node;
     Node *temp2;    
     temp2=temp->next;
     temp1->data=d;
     temp1->next=NULL;
     temp->next=temp1;
     temp1->next=temp2;
     
}

    void linkedList:: deleteFromStart(){
        Node *temp;
        temp=head;
        head=head->next;
        delete(temp);
    }
    void linkedList::deleteFromEnd(){
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete(temp->next);
        temp->next=NULL;

    }
    void linkedList::deleteFromOther(int pd){
        Node *temp=head;
        while(temp->next->data!=pd){
            temp=temp->next;
        } 
        Node *temp1;
        temp1=temp->next->next;
        delete(temp->next);
        temp->next=temp1;
    }

    void linkedList::displayList(){
        Node * temp=head;
        while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
}
}    

int main(){
    linkedList l;

    while(1){
        int ch,t,pd;
        cout<<"1.Create Linked List"<<endl<<"2.Insert at start"<<endl<<"3.Insert at end"<<endl<<"4.Insert at any other position(After a given NOode)"<<endl<<"5.Delete from start"<<endl<<"6.Delete from end "<<endl<<"7.Delete from any other Position(Deleting a given node)"<<endl<<"8.Display The List"<<endl<<"9.Exit"<<endl;;
        cin>>ch;
        switch(ch){
       
        case 1:
            cout<<"Enter the Number of Nodes You want to insert:-";
            int n;
            cin>>n;
            cout<<"Enter the numbers";
            for(int i=0;i<n;i++){
                cin>>t;
                l.createLinkedList(t);
             }
        break;

        case 2:
            cout<<"Enter the value you want to insert:-";
            cin>>t;
            l.insertAtStart(t);

        break;

        case 3:
            cout<<"Enter the value you want to insert:-";
            cin>>t;
            l.insertAtEnd(t);
        break;

        case 4:
            cout<<"Enter the value you want to insert:-";
            cin>>t;
            cout<<"Enter the position after which you want to insert";
            cin>>pd;
            l.insertAtOther(t,pd);
        break;

        case 5:
            l.deleteFromStart();
        break;
           
        case 6:
             l.deleteFromEnd();
        break;

        case 7:
        int pd;
        cout<<"Enter the element which you want to delete";
        cin>>pd;
            l.deleteFromOther(pd);
        break;

        case 8:
         l.displayList();
         cout<<endl;
        break;
        case 9:
        exit(0);
        break;

         
    }
    }
}