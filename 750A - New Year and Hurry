Problem link : https://codeforces.com/contest/750/problem/A


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,time;
    cin>>n>>time;
    int arr[n+1];
    arr[0]=0;
    for(int i = 1; i<=n; i++){
        arr[i]=5*i;
    }
    int count =0;
    
    
    for(int i=1; i<=n; i++){
        if(time<=240){
            time+=arr[i];
            if(time>240){
                break;
            }
            count++;
            
        }
    }
    cout<<count<<endl;
    
}
