#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

//INORDER TRAVERSAL 
//LEFT ROOT RIGHT
void inorder(Node* node,vector<int>& ans){ //& here is very important as it make changes in the orignal array
    if(node==nullptr) return;
    inorder(node->left,ans);
    ans.push_back(node->data);
    inorder(node->right,ans);
}
//PREORDER TRAVERSAL
//ROOT LEFT RIGHT
void preorder(Node* node,vector<int>& ans){
    if(node==nullptr) return;
    ans.push_back(node->data);
    preorder(node->left,ans);
    preorder(node->right,ans);
}
//PREORDER TRAVERSAL
//LEFT RIGHT ROOT
void postorder(Node* node,vector<int>& ans){
    if(node==nullptr) return;
    postorder(node->left,ans);
    postorder(node->right,ans);
    ans.push_back(node->data);
}
int main(){
        Node* firstnode = new Node(1);
        Node* secondnode = new Node(2);
        Node* thirdnode = new Node(3);
        Node* fourthnode = new Node(4);
        Node* fifthnode = new Node(5);

        firstnode->left = secondnode;
        secondnode->left = fifthnode;
        secondnode->right = fourthnode;
        firstnode->right = thirdnode;   
        
        vector<int> ans;
        inorder(firstnode,ans);
        cout<<"INORDER TRAVERSAL : "<<" ";
        for(int x:ans){
            cout<<x<<" ";
        }
        vector<int> ans1;
        preorder(firstnode,ans1);
        cout<<"PREORDER TRAVERSAL : "<<" ";
        for(int x:ans1){
            cout<<x<<" ";
        }
        vector<int> ans2;
        postorder(firstnode,ans2);
        cout<<"POSTORDER TRAVERSAL : "<<" ";
        for(int x:ans2){
            cout<<x<<" ";
        }

}