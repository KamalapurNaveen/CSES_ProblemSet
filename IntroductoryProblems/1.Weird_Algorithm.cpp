#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    long long temp=n;
    while(temp!=1){
        cout<<temp<<" ";
        if(temp&1){
            temp=temp * 3 + 1;
        }
        else{
            temp=temp/2;
        }
    }
    cout<<temp;
}