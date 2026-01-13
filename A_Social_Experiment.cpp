#include <bits/stdc++.h>
using namespace std;

int main(){
    int test; cin>>test;
    while(test--){
        int n ; cin>>n;
        if(3>=n){
            cout<<n<<endl;
        }
        else if(n%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}