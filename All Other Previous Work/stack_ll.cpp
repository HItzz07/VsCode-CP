#include<iostream>
using namespace std;

class Node{
    public:
    double data;
    Node* next;
};

class Stack{
    private:
        Node* head;
        Node* _top;
    public:
    Stack(void){
        head=NULL;
        }
    ~Stack(){
        Node *temp = head;
        while(temp) {
            cout << "delete : " << head->data << endl;
            temp=temp->next;
            delete head;
            head=temp;
        }
    };
    
    void display();
    bool isEmpty();
    bool isFull();
    double top(){
        if(head==NULL)
        {
            cout<<"The Stack is Empty\n";
            return -1;
        }
        else
            return _top->data;
    }

    void pop(){
        if(head==NULL)
            cout<<"Error The Stack is Empty."<<endl;
        else
        {
           Node* temp = new Node;
           temp=head; 
           while(temp->next != _top) {
                temp=temp->next;
            }
            _top=temp;
            cout << "Pop : " << temp->next->data << endl;
            delete temp->next;
            _top->next=NULL;
        }
        
    }    

    void push(double x)
    {
        if(!head) {
            Node* newNode = new Node;
            newNode->data=x;
            newNode->next=NULL;
            head=newNode;
            _top=newNode;
        }
        else {
            Node* newNode = new Node;
            newNode->data=x;
            newNode->next=NULL;
            _top->next=newNode;
            _top=newNode;
        }

    }
};

void Stack ::  display() {
        Node* temp = new Node;
        temp=head;
        while(temp) {
            cout << temp->data << endl;
            temp=temp->next;
        }
    }


int main()
{
    Stack s;
    s.push(5);
    s.push(7);
    s.push(6);
    s.display();
    cout << "Top : " << s.top() << endl;
    s.pop();
    s.display();
}