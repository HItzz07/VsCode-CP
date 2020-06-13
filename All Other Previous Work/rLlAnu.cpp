#include<bits/stdc++.h>

class Node {
    public:
        int data;
        Node *next;
};

class List {
    private:
        Node *head;
        Node *last;
    public:
        List() {
            head=NULL;
            last=NULL;
        }
        ~List() {}
        
        void insertNode(int& value);
        void display() {
            Node *temp;
            temp = head;
            while(temp) {
                printf("%d",temp->data);
                temp = temp->next; 
            }
        }
};

void List::insertNode(int& value) {
    Node *newNode = new Node;
    if(!head) {
        newNode->data = value;
        newNode->next = NULL;
        head = newNode;
        last = newNode; 
    } 
    else {
        newNode->data = value;
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

int main() {
    int size;
    scanf("%d",&size);
    int value;
    List list;
    for(int i=0; i<size ; i++) {
        scanf("%d",&value);
        list.insertNode(value);   
    }
    
    list.display();
    
    return 0;
}