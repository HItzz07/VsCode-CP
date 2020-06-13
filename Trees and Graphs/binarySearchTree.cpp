#include<bits/stdc++.h>
using namespace std;
#define COUNT 10
vector <int > v1;


class Node{
    public:
    int data;
    Node *left = NULL,*right = NULL; 
};
// Node *root = NULL;


Node *createNode(int d){
    Node *newNode = new Node();
    newNode->data = d;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void InsertNode(Node* &rootNode , int d){

        if(rootNode == NULL){
            rootNode = createNode(d);
        }

        else if(rootNode->data >= d){
                     InsertNode(rootNode->left , d);
                }

        else{
                     InsertNode(rootNode->right , d);
                }

            }
 
 void displayInorder(Node *rootNode){
    if(rootNode != NULL){
        displayInorder(rootNode->left);
        cout<<rootNode->data<<" ";
        displayInorder(rootNode->right);

    }
}

bool search(Node * rootNode , int d){
    if(rootNode == NULL )
        return false;
    else if(rootNode->data == d)
        return true;
    else if (rootNode -> data >= d )
         search(rootNode->left , d );
    else
         search(rootNode->right , d);                    
    
}

Node* minValueNode(Node* rootNode) 
{ 
    Node* current = rootNode; 
  
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL) 
        current = current->left; 
    return current; 
} 

Node* maxValueNode(Node* rootNode) 
{ 
    Node* current = rootNode;   
    /* loop down to find the leftmost leaf */
    while (current && current->right != NULL) 
        current = current->right; 
    return current; 
}

Node* deleteNode(Node* rootNode , int d){
    if(rootNode == NULL )
        return rootNode;
    if (d < rootNode -> data  )
        rootNode->left =  deleteNode(rootNode->left , d );
    else if(d > rootNode->data)
        rootNode->right = deleteNode(rootNode->right , d);

    else if(rootNode->data == d){
        // delete(rootNode);
        if (rootNode->left == NULL) 
        { 
            Node* temp = rootNode->right; 
            free(rootNode); 
            return temp; 
        } 
        else if (rootNode->right == NULL) 
        { 
            Node *temp = rootNode->left; 
            free(rootNode); 
            return temp; 
        } 
  
        // node with two children: Get the inorder successor (smallest 
        // in the right subtree) 
        Node* temp = minValueNode(rootNode->right); 
  
        // Copy the inorder successor's content to this node 
        rootNode->data = temp->data; 
  
        // Delete the inorder successor 
        rootNode->right = deleteNode(rootNode->right, temp->data); 
    } 
    return rootNode;
}

int main(){
vector <int > v1 ={6,2,8,1,7,3,9,11,4,5};
    
    Node *root = NULL;
    for(int i=0;i<v1.size();i++){
    InsertNode(root , v1[i]);
    }
    displayInorder(root);   

    int value = 11;
    if(search(root , value))
        cout<<"found"<<endl;
    else
        cout<<"Not Found"<<endl;

    Node *minValue = minValueNode(root);
    cout<<minValue->data;
    cout<<endl;

    Node *maxValue = maxValueNode(root);
    cout<<maxValue->data<<endl;

    root =  deleteNode(root , 6);
    displayInorder(root);   
    cout<<endl<<root->data<<endl;

}

