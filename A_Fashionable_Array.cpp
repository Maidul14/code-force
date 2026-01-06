#include <bits/stdc++.h>
using namespace std;
// problem link : https://codeforces.com/problemset/problem/2110/A
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int min_val = *min_element(arr.begin(), arr.end());
        int max_val = *max_element(arr.begin(), arr.end());
        if((max_val+min_val)%2 ==0){
            cout<< 0 <<endl;
        }
        else{
            int count1 =0;
            for (int i = 0; i < n; i++)
            {
                if((arr[i]+max_val)%2==0) break;
                    count1++;
                
            }
            int count2 =0;
            for(int i =n-1; i>=0; i--){
                if((min_val +arr[i])%2 ==0) break;
                    count2++;
                
            }
            cout<<min(count1 ,count2)<<endl;
        }
        
    }
    
    return 0;
}