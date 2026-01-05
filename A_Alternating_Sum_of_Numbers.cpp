#include <bits/stdc++.h>
using namespace std;
//problem link: https://codeforces.com/contest/2010/problem/A
int main(){
    int test; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int sum1=0, sum2=0;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                sum1+=arr[i];
            }
            else{
                sum2+=arr[i];
            }
        }
        cout<<sum1 - sum2<<endl;
    }
    
    return 0;
}