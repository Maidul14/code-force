#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/1850/D
int main(){
    int test ; cin>>test ;
    while (test--)
    {
        int a,b; cin>>a>>b;
        vector<int>vec(a);
        int mx=1 ,cnt=1;
        for (int i = 0; i < a; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        for (int i = 1; i <a; i++)
        {
            if(vec[i]-vec[i-1]<=b){
                cnt++;
            }
            else{
                cnt=1;
            }
            mx=max(mx,cnt);
        }
        cout<<a-mx<<endl;
        
    }
      
    return 0;
}