#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/1514/problem/A
int main(){
    int test ; cin>>test;
    while (test--)
    {
    int n ; cin>>n;
    int x;
    int ans = 0;
    for (int i = 0; i <n; i++)
    {
        cin>>x;
        int a = sqrt(x);
        if(a*a!=x) ans =1;
    }
    if(ans ==0) cout<<"NO"<<endl;
    else if(ans ==1) cout<<"YES"<<endl;
    }
    return 0;
}