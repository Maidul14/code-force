#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/2184/problem/B
int main(){
    int test ; cin>>test;
    while(test--){
        long long s,k,m; cin>>s>>k>>m;
        if(s<=k){
            cout<<max(0ll,s-m%k)<<endl;
        }
        else{
            long long rep = (m/k);
            if(rep & 1){
                cout<<k-m%k<<endl;
            } else{
                cout<<s-m%k<<endl;
            }
        }
    }
    return 0;
}