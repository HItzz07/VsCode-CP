#include<iostream>
using namespace std;

class Node
{
    public:
    double data;
    Node *next;
};

class Queue
{
    public:
    Queue(){
        front=rear=NULL;
        counter=0;
    }

    ~Queue(){
        double value;
        while(!IsEmpty()) Dequeue();
    }

    bool IsEmpty()
    {
        if(counter) return false;
        else return true;
    }

    void Enqueue(double x);
    bool Dequeue();
    void DisplayQueue(void);

    private:
    Node *front;
    Node *rear;
    int counter;
};

void Queue::Enqueue(double x){
    Node* newNode = new Node;
    newNode->data=x;
    newNode->next=NULL;

    if (IsEmpty()){
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
    counter++;
}

bool Queue::Dequeue(){
if(IsEmpty()){
    cout<<"Error the Queue is empty"<<endl;
    return false;
    }
else{
    double x;
    x=front->data;
    Node* nextNode = front->next;
    delete front;
    front=nextNode;
    counter--;
    }
}

void Queue::DisplayQueue(){
    cout<<"front-->";
    Node* curNode=front;
    for(int i=0;i<counter;i++){
        if(i==0) cout<<"\t";
        else cout<<"\t\t";

        cout<<curNode->data;
        
        if(i!=counter-1)
            cout<<endl;
        else
            cout<<"\t<--rear"<<endl;
        curNode = curNode->next;    
            
    }
}

int main()
{
    Queue q1;
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(4);

    q1.DisplayQueue();
    //double value =3;
    q1.Dequeue();
    q1.Dequeue();
    q1.DisplayQueue();
    
}