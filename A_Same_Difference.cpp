#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/2166/problem/A
int main(){
    int test ; cin >> test;  
    while(test--){
        int n ; cin >> n;
        string s ; cin >> s;
        int count = 0;
        for(int i =0; i<n ; i++){
            if (s[i]!= s[n-1]){
                count++;
            }
        }   
        cout<<count<<endl;   
    }
    return 0;
}