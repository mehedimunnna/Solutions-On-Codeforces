//Problem Link : https://codeforces.com/problemset/problem/486/A


#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;

    if(n%2==0){
    cout<<n/2<<endl;                    //for n = even number, we get actual result. if we use (n/2)        
    }
    else{
    cout<<(n/2-n)<<endl;                //for n = odd number, we get actual result. if we use (n/2-n)   
    }
}
