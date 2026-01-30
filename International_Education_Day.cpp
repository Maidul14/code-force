#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/IED
int main(){
    int a,b,c; cin>>a>>b>>c;
    int res1=a*c;
    int res2=b*c;
    if(res1>res2){
        cout<<res1;
    } 
    else{
        cout<<res2;
    }
    return 0;
}