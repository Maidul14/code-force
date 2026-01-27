#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/1426/A
int main(){
    int test ; cin>>test;
    while (test--)
    {
          int n,x; cin>>n>>x;
          if(n<=2){
            cout<<1<<endl;
          }
          else{
            cout<<1+(n-3)/x+1<<endl;
          }
    }
      
    return 0;
}