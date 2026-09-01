#include <bits/stdc++.h>
using namespace std;

void print(){
    cout<<"Hello World!"<<endl;
    print();
}
int main(){
    print();
}

//Recursion occurs when a function calls itself until a base condition is hit.
//if there is no base condition then there will be stackoverflow or segmentation fault.