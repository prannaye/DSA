#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    vector<Node*> children;//list of children a node has

    Node(int x){
        data = x;
    }
    
};

//Function to add a child to a node
void addChild(Node* parent,Node* child){
    parent->children.push_back(child);
}

// Function to print parents of each node
void printParent(Node* node,Node* parent){
    if(parent==nullptr){
        cout<<node->data<<" -> Null"<<endl;
    }
    else {
        cout<<node->data<<" -> "<<parent->data<<endl;
    }
    for(auto child : node->children){//go to every child stored by this node
        printParent(child,node); //recursive function is used to go to each node and find its parent  
    }
}

// Function to print children of each node
void printChildren(Node* node) {
    cout << node->data << " -> ";
    for (auto child : node->children){ //this for loop is for printing the children of the node
        cout << child->data << " ";
    }
        
    cout << endl;

    for (auto child : node->children) //this for loop is for recursively calling the children of each node
        printChildren(child);
}
//Function to print leaf nodes
void printLeaf(Node* node){
    if(node->children.empty()){
        cout<<node->data<<endl;
        return;
    }
    for(auto child : node->children){
        printLeaf(child);
    }
}
//Function to print the degree
void printDegree(Node* node,Node* parent){
    int degree = node->children.size();
    if(parent!=nullptr){
        degree++;  //this calculates the one connection which is to the parent 
    }
    cout << node->data << " -> " << degree << endl;
    for(auto child : node->children){
        printDegree(child,node);
    }
}
int main(){
Node* root = new Node(1);
Node* n1 = new Node(2);
Node* n2 = new Node(3);
Node* n3 = new Node(4);
Node* n4 = new Node(5);

    addChild(root,n1);
    addChild(root,n2);
    addChild(n1,n3);
    addChild(n1,n4);

    cout << "Parents of each node:" << endl;
    printParent(root, nullptr);

    cout << "Children of each node:" << endl;
    printChildren(root);

    cout << "Leaf nodes are :" << endl;
    printLeaf(root);

    cout << "Degrees of nodes:" << endl;
    printDegree(root, nullptr);
}