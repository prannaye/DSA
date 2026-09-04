#include <bits/stdc++.h>
using namespace std;

void print(int a){
    if(a==10) return;
    cout<<a<<endl;
    a++;
    print(a);
}
int main(){
    print(0);
}

