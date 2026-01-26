#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/1526/problem/A
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n ; 
        n = n*2;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int i = 0;
        int j =n-1;
        int count= 0;
        while (i<=j)
        {
            if(count%2==0){
                cout<<arr[j]<<" ";
                j--;
            }
            else{
                cout<<arr[i]<<" ";
                i++;
            }
            count++;
        }
        cout<<endl;
    }
      
    return 0;
}
/* ekhane age ami input nechi ... tarpor atake sort kore nibo... tarpor age bejor ta mane suru ta print korbo tarpor jor hole last theke print korbo */