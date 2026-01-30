#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/WEIGHTLIFT
int main(){
    int a1,a2,b1,b2,c1,c2 ; cin>>a1>>a2>>b1>>b2>>c1>>c2;
    int ans1=0 ,ans2=0, ans3=0;
    if(a1>a2){
        ans1=a1;
    }
    else if(a2>=a1){
        ans1=a2;
    }
    if(b1>b2){
        ans2=b1;
    }
    else if(b2>=b1){
        ans2=b2;
    }
    if(c1>=c2){
        ans3=c1;
    }
    else if(c2>=c1){
        ans3=c2;
    }
    cout<<ans1+ans2+ans3;
    return 0;
}