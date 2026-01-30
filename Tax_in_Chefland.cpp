#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TAXES
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        if(n>100){
            cout<<n-10<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    
    return 0;
}