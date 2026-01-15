#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/2162/problem/A
int main(){
    int test ; cin>>test;
    while(test--){
        int n ; cin>>n;
        int arr[n];
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j <n; j++)
            {
                int result = (arr[i] + arr[j]) / 2;
                if(result > max){
                    max = result;
                }
            }
            
        }
        cout<<max<<endl;         
    }
    return 0;
}