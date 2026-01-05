#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/1593/problem/A
int main(){
    int test ; cin>>test;
    while(test--){
        int a,b,c; cin>>a>>b>>c;
        int A,B,C;
        int max1= max(b,c);
        if(a>max1) A=0;
        else{
            A= max1+1-a;
        }
        int max2= max(a,c);
        if(b>max2) B=0;
        else{
            B= max2+1 -b;
        }
        int max3= max(a,b);
        if(c>max3) C=0;
        else{
            C= max3+1 -c;
        }
        cout<<A<<" "<<B<<" "<<C<<endl;
    }
    return 0;
}