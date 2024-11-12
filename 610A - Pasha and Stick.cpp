//problem link : https://codeforces.com/contest/610/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n%2==1 || n<5){
        cout<<0<<endl;
    }
    else{
        n = n/2;
        n--;
        n= n/2;
        cout<<n<<endl;
    }
    return 0;
}
