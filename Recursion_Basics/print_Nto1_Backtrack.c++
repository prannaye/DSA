#include <bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i>n) return;
    print(i+1,n);
    cout<<i<<endl;
}
int main(){
    print(1,5);
}
//simillar to print 1 to N only difference is position of print function and cout