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
class LLQImp{
    public:
    Node* start = nullptr;
    Node* end = nullptr;
    int size = 0;
    Node* temp1;
    void push(int x){
        Node* temp = new Node(x);
        if(start == nullptr) start = end = temp;
        else end->next = temp;
        end = temp;
        size++;
    }
    void pop(){
        if(start==nullptr) return;
        temp1 = start;
        start = start->next;
        delete temp1;
        size--;
    }
    int topf(){
        if(start==nullptr) return -1;
        return start->data;
    }
    int sizef(){
        return size;
    }
};
int main(){
    LLQImp s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.sizef()<<endl;
    cout<<s.topf()<<endl;
    s.pop();
    cout<<s.topf()<<endl;
    cout<<s.sizef()<<endl;
}