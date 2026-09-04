#include <bits/stdc++.h>
using namespace std;

void sumn(int n,int sum){
    if(n<1) {
        cout<<sum;
        return;
    }
    sumn(n-1,sum+n);
}
int main(){
    sumn(5,0);
}

