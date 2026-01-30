#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/AUDIBLE
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        if(n>=67 && n<=45000){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}