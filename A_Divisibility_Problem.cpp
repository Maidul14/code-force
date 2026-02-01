#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/1328/A
int main() {
    int test ; cin>>test; 
    while (test--) {
        long long a, b;
        cin >> a >> b;
        long long rem = a % b;
        if (rem == 0)
            cout<<0<<endl;
        else
            cout<<b-rem<<endl;
    }

    return 0;
}
