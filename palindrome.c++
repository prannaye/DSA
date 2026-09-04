#include <bits/stdc++.h>
using namespace std;

bool pal(string& s,int i){
    int n = s.size();
    if(i>=n/2) return true;

    if(s[i]!=s[n-i-1]) return false;
    
    return pal(s,i+1);
}

int main(){
    string s = "madam";
    bool a = pal(s,0);
    cout<<a;
}

