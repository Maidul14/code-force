#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/2044/problem/B
int main(){
      int test; cin >> test;
      while(test--){
        string str; cin >> str;
        reverse(str.begin(), str.end());

        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]=='p') str[i]= 'q';
            else if(str[i]=='q') str[i]= 'p';
        }
        cout <<str<< endl;
      }
    return 0;
}