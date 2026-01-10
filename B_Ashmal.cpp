#include <bits/stdc++.h>
using namespace std;
//problem link: https://codeforces.com/problemset/problem/2180/B
int main(){
    int test; cin>>test;
    while(test--){
        int n ; cin>>n;
        
        vector<string>vec(n);
        for(int i=0; i<n;i++){
            cin>>vec[i];
        }
        string s = "";
        
        for (int i = 0; i < n; i++)
        {
            string s1 = s + vec[i];
            string s2 = vec[i] + s;
            if(s1<s2){
                s = s1;
            }
            else{
                s = s2;
            }
        }
        cout<<s<<endl;
        
        
    }
    return 0;
}