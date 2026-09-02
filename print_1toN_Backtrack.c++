#include <bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i<1) return;
    print(i-1,n);
    cout<<i<<endl;
}
int main(){
    print(5,5);
}

//this is backtracking first the function is getting a call till the base condition hits
//then it prints cout 
//first function is called then action is done

//simillar to print N to 1 only difference is position of print function and cout