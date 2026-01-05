#include <bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    
    while (test--) {   
        int a,b; cin>>a>>b;
        if (a==b) {
            cout<<0<<endl;
        }
        else if (a<b) {
            int d=b-a;
            if(d%2==1)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else { 
            int d =a-b;
            if(d%2==0)
                cout<<1<<endl;
            else
                cout<<2<<endl; 
        }
    }
    return 0;
}

