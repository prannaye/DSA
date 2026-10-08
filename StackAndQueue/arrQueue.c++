#include<iostream>
//#include<stack>
using namespace std;

class QueueImp{
    public:
    const static int size = 10;
    int queue[size];
    int currsize = 0;
    int start , end = -1;
    
    void push(int x){
        if(currsize==size) return;
        if(currsize==0) start = end = 0;
        else end = (end+1)%size; //modularization of the size

        queue[end] = x;
        currsize += 1;
    }
    int pop(){
        if(currsize==0) return -1;
        int el = queue[start];
        if(currsize==1) start = end = -1;
        else{
            start = (start+1)%size;
            
        }
        currsize -= 1;
        return el;
    }
    int top(){
        if(currsize==0) return -1;
        return queue[start];
    }
    int sizef(){
        return currsize;
    }
};
int main(){
    QueueImp q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.sizef()<<endl;
    cout<<q.top()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.top()<<endl;
    cout<<q.sizef()<<endl;

}