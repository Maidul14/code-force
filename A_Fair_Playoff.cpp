#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/1535/problem/A
int main(){
    int test ; cin>>test; 
    while (test--)
    {
       int a,b,c,d ; cin>>a>>b>>c>>d;
       int mx1= max(a,b);
       int mn1= min(a,b);
       int mx2= max(c,d);
       int mn2= min(c,d);
        if(mn1>mx2 || mn2>mx1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }  
    return 0;
}
/* ei problem ta emon jekane final jete parbe jodi a,b er modhe jea max seta jeno c,d er min er theke boro hoy and c,d er max jeno a,b er theke boro hoy */