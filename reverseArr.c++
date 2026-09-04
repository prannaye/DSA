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
void reverse_rec(vector<int>& arr,int i,int n){
   
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);
    reverse_rec(arr,i+1,n);
}

int main(){
    vector<int> arr ={1,2,3,4,5};
    int n = arr.size();
    reverse_rec(arr,0,n);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}

