#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/WRITINGSPEED
int main(){
    int n ; cin>>n;
    int res=n*5;
    if(res<=60){
        cout<<"YES";
    } 
    else{
        cout<<"NO";
    }
    return 0;
}