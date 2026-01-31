#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/266/problem/A
int main(){
      int n ; cin>>n;
      string s ; cin>>s;
      int count =0;
      for (int i = 1; i < n; i++)
      {
        if(s[i]==s[i-1]){
            count++;
        }
      }
      cout<<count;
      
    return 0;
}