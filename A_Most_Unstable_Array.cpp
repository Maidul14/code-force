#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/1353/problem/A
int main(){
    int test ; cin>>test;
    while(test--){
        int n,m; cin>>n>>m;
        if(n==1){
            cout<<0<<endl;
        }
        else if(n==2 ){
            cout<<m<<endl;
        }
        else{
            cout<<2*m<<endl;
        }
    }
    return 0;
}