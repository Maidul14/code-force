#include <bits/stdc++.h>
using namespace std;
//problem link: https://codeforces.com/problemset/problem/1512/A
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        int in = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
             if (arr[i] != arr[i + 1]) {
                if (i == 0 && arr[i + 1] == arr[i + 2]) {
                    in = i;
                } 
                else {
                    in = i + 1;
                }
                break;
            }
        }
        cout << in + 1 << endl;
    }
    return 0;
}
/*ekane loop niye age check korbo je i and i+1 akoi naki... jodi ak nah hoy taile amra condition use korbo ....*/