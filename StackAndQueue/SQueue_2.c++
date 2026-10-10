#include<iostream>
#include<stack>
using namespace std;
this is lefy broooooooooooooooooooooooooooooooooooooooooooooooo
class SQImp{
    public:
    stack<int> s1,s2;

    void pushf(int x){
        s2.push(x);    
    }
    void popf(){
        if(s2.empty()!=0) s2.pop();
        else{
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
        }
    }
    int top(){
        if(s2.empty()!=0) return s2.top();
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        return s2.top();
    }

    int sizef(){
        return s1.size() + s2.size();
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