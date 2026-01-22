#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/1517/problem/A
int main(){
    int test; cin>>test;
    while (test--)
    {
       long long n ; cin>>n;
       long long count = 0;
       while (n>=2050)
       {
         count++;
         long long x = 2050;
         while (x<=n)
         {
           x= x*10;
         }
         x=x/10;
         n = n-x;
       }
       if(n!=0) cout<<-1<<endl;
       else{
        cout<<count<<endl;
       } 
    }
    return 0;
}