#include <bits/stdc++.h>
using namespace std;
//problem link: https://codeforces.com/problemset/problem/2176/A
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n;i++){
            cin>>vec[i];
        }
        int answer = 0;
        int max = vec[0];
        for(int j=1;j<n;j++){
           if(max>vec[j])answer++;
           
           else{
               max = vec[j];
           }
        }
        cout<<answer<<endl;
    }
    return 0;
}