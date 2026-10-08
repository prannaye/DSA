#include<iostream>
//#include<stack>
using namespace std;

class StackImp{
    public:
    int top = -1;
    int stack[10];

    void push(int x){
        if(top<=10){
            top = top+1;
            stack[top] = x;
        }
    }
    void pop(){
        if(top==-1) return;
        top = top-1;
    }
    int topf(){
        if(top==-1) return -1;
        return stack[top];
    }
    int size(){
        return top+1;
    }
};
int main(){
    StackImp s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.size()<<endl;
    cout<<s.topf()<<endl;
    s.pop();
    cout<<s.topf()<<endl;
    cout<<s.size()<<endl;

}