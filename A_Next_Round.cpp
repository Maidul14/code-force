#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/contest/158/problem/A
int main(){
    int test, index;
    cin >> test >> index;
    int count = 0;
    int arr[test];
    for (int i = 0; i < test; i++) {
        cin >> arr[i];
    }
    int jome = arr[index - 1];
    for (int i = 0; i < test; i++) {
        if (arr[i] >= jome && arr[i] > 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}
