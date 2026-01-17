#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/2167/problem/C
int main(){
    int test; cin>>test;
    while(test--){
    int n ; cin>>n;
    vector<int> a(n);
    int odd =0 ;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==1){
            odd++;
        }
    } 
    if(odd ==n || odd==0){
        for(auto x : a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else{
    sort(a.begin(),a.end());
    for(auto x : a){
        cout<<x<<" ";
    }
    cout<<endl;
    }
}
    return 0;
}