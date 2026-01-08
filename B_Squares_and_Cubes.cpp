#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/1619/B
int main(){
    int test ; cin>>test;
    while (test--)
    {
        long long n ; cin>>n;
        long long sq = sqrt(n);
        long long qu = cbrt(n);
        long long si= 1;
        for (long long i = 1; i*i*i*i*i*i<=n; i++)
        {
            si = i;
        }
        cout<<sq+qu -si<<endl;
    }
    
    return 0;
}