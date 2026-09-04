#include <bits/stdc++.h>
using namespace std;

vector<int> reverse_forloop(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        swap(arr[i],arr[n-i-1]);
    }
    return arr;
}
vector<int> reverse_2pointers(vector<int>& arr){

    int n = arr.size();
    int left = 0;
    int right = n-1;
    while(left<right){

        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    return arr;
}
void reverse_rec(vector<int>& arr,int l,int r){
    int n = arr.size();
    if(l>=r) return;

    swap(arr[l],arr[r]);
    reverse_rec(arr,l+1,r-1);
}

int main(){
    vector<int> arr ={1,2,3,4,5};
    reverse_rec(arr,0,4);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}

