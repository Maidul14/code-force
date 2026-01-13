#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/151/A
int main(){
    int n,k,l,c,d,p,nl,np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int one = k*l;
    int two = one/(n*nl);
    int three = c*d;
    int four = three/n;
    int five = p/(n*np);
    int ans = min({two,four,five});
    cout<<ans<<endl;
    return 0;
}

