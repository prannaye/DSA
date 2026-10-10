#include<iostream>
#include<queue>
using namespace std;

class QStackImp{
    public:
    queue<int> q;

    void pushf(int x){//O(N) TC
        int s = q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        q.pop();
    }
    int topf(){
        return q.front();
    }
    int sizef(){
        return q.size();
    }
};
int main(){
QStackImp s;
    s.pushf(1);
    s.pushf(2);
    s.pushf(3);
    cout<<s.sizef()<<endl;
    cout<<s.topf()<<endl;
    s.pop();
    cout<<s.topf()<<endl;
    cout<<s.sizef()<<endl;
}