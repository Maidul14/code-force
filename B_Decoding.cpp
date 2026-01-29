#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/746/B
int main(){
    int n ; cin>>n;
    string s ; cin>>s;
    string s2 ="";
    for (int i = n-1; i >=0; i--)
    {
        int position = s2.size()/2;
        s2.insert(s2.begin()+position,s[i]);
    }
    cout<<s2<<endl;
    return 0;
}