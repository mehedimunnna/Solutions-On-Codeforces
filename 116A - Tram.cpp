//Problem Link : https://codeforces.com/problemset/problem/116/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int passenger=0, mx=0;
    
    for(int i=1; i<=n; i++){
        
        int a,b;
        cin>>a>>b;
      
        passenger = passenger - a;
        passenger = passenger + b;
        
        mx = max(mx,passenger);
    }
    cout<<mx<<endl;
}
