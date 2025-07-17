#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int longest=1;
    int clongest=1;
    for(int i=1;i<(int)s.size();i++){
        if(s[i]==s[i-1]){
            clongest++;
        }
        else{
            clongest=1;
        }
        longest=max(longest,clongest);
    }
    cout<<longest;
    
}