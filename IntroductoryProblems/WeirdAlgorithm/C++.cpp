#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int number; // taking input in long long because as I need to multiply it by 3 ,it may exceed the limit of integer.
    cin>>number;
    cout<<number<<" ";
    while(number!=1){
        if(number&1){
            // if number is odd
            number=number*3 + 1;
        }
        else {
            // if number is even
            number/=2;
        }
        cout<<number<<" ";
    }
}
