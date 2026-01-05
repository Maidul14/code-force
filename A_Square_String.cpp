#include <bits/stdc++.h>
using namespace std;
// problem link; https://codeforces.com/contest/1619/problem/A
int main(){
    int test; cin>>test;
    while(test--){
        string s ; cin>>s;
        int n = s.length();
        if(n%2 !=0){ //if length is odd
            cout<<"NO"<<endl;
        }
        else{
            string a = s.substr(0,n/2); // half check 
            string b = s.substr(n/2,n/2); //second half check
            if(a==b){
                cout<<"YES"<<endl; //if both halves are equal
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
