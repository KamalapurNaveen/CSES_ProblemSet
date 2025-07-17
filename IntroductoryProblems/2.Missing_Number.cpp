#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n-1];
    for(int i=0;i<(n-1);i++){
        cin>>arr[i];
    }
    int ans=n;
    for(int i=0;i<(n-1);i++){
        ans=ans ^ (i+1) ^ (arr[i]);
    }
    cout<<ans;
    
}