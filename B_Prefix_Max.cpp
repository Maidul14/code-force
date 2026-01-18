#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/2185/problem/B
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans1 = 0;
        int max1 = 0;
        for(int i = 0; i < n; i++){
            max1 = max(max1, arr[i]);
            ans1 += max1;
        }
        int ans2 = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
            swap(arr[i], arr[j]);
            int tem = 0, max2 = 0;
            for(int k = 0; k < n; k++){
                    max2 = max(max2, arr[k]);
                tem += max2;
             }
            ans2 = max(ans2, tem);
            swap(arr[i], arr[j]);
            }
        }
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}

