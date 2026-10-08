#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
class LLStackImp{
    public:
    Node* top;
    int size = 0;
    void push(int x){
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        size++;
    }
    void pop(){
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }
    int topf(){
        return top->data;
    }
    int sizef(){
        return size;
    }
};
int main(){
    LLStackImp s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.sizef()<<endl;
    cout<<s.topf()<<endl;
    s.pop();
    cout<<s.topf()<<endl;
    cout<<s.sizef()<<endl;

}