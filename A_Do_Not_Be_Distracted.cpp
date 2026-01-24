#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/1520/problem/A
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        string s ; cin>>s;
        int flag = 0;
        map<char,int>mp;
       for (int i = 0; i <s.size(); i++)
        {
            mp[s[i]]++;
            char z = s[i];
            while (s[i]==z)
            {
                i++;
            }
            i--;
            if(mp[z]>1) flag =1;
        }
        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    return 0;
}