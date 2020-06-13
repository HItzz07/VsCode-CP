#include<bits/stdc++.h>
using namespace std;
#define COUNT 10
class Node{
public:
int data;
Node *left,*right; 
};

Node* newNode(int d){

    Node *node =  new Node;
    node->data=d;
    node->left=NULL;
    node->right=NULL;
    return (node);
};

void displayPreorder(Node *root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    displayPreorder(root->left);
    displayPreorder(root->right);
}

void displayInorder(Node *root){
    if(root==NULL)
    return;
    displayInorder(root->left);
    cout<<root->data<<" ";
    displayInorder(root->right);
}

void displayPostorder(Node *root){
    if(root==NULL)
    return;
    displayPostorder(root->left);
    displayPostorder(root->right);
    cout<<root->data<<" ";


}


//Main Working Function to display tree in 2D;
void printTree(Node *root , int space){
    if(root==NULL)
        return;

    space+=COUNT;
    printTree(root->right,space);
    cout<<endl;

    for(int i=0;i<space;i++){
        cout<<" ";
    }
    cout<<root->data<<endl;

    printTree(root->left,space); 
}

//Function to display tree in 2D
void display(Node *root){
    printTree(root,0);
}

int main(){

Node *root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
root->right->left = newNode(6);
root->right->right = newNode(7);

display(root);
cout<<endl;
displayPreorder(root);
cout<<endl;
displayInorder(root);
cout<<endl;
displayPostorder(root);
return 0;
}