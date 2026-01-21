#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/96/A 
int main(){
    string s; cin>>s;
    int ans = 0;
    for(int i =0 ; i<s.length(); i++){
        int count =0;
        if(s[i]=='0'){
        while (s[i]=='0' && i<s.size())
        {
            count++;
            i++;
        }
        }
        else{
            while (s[i]=='1' && i<s.size())
            {
                count++;
                i++;
            }
        }
        if(count>=7) ans=1;
        i--;
    }
    if(ans==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
    return 0;
}