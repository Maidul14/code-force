#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            int c2 = a*a + b*b;
            int c = sqrt(c2);
            if (c*c == c2 && c <= n) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
