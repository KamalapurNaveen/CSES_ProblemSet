#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long minMoves=0;
    int prev=arr[0];
    for(int i=1;i<n;i++){
        int add= (prev<arr[i]) ? 0 : (prev-arr[i]);
        prev=arr[i]+add;
        minMoves+=add;
    }
    cout<<minMoves;
    
}