#include <bits/stdc++.h>
using namespace std;
//problem link: https://codeforces.com/problemset/problem/758/A
int main(){
    int n ; cin>>n;
    vector<int>vec(n);
    for (int i = 0; i <n ; i++)
    {
        cin>>vec[i];
    }
    int maximum = *max_element(vec.begin(), vec.end());
    int sum= 0 ;
    for (auto X:vec)
    {
        sum = sum + (maximum-X);
    }
    cout<<sum<<endl;
    return 0;
}