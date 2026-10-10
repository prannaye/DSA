#include<iostream>
#include<stack>
using namespace std;

class SQImp{
    public:
    stack<int> s1,s2;

    void pushf(int x){//O(2N) TC
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void popf(){
        s1.pop();
    }
    int topf(){
        return s1.top();
    }
    int sizef(){
        return s1.size();
    }
};
int main(){
SQImp s;
    s.pushf(1);
    s.pushf(2);
    s.pushf(3);
    cout<<s.sizef()<<endl;
    cout<<s.topf()<<endl;
    s.popf();
    cout<<s.topf()<<endl;
    cout<<s.sizef()<<endl;
}