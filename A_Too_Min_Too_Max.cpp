#include <bits/stdc++.h>
using namespace std;
//problem link : https://codeforces.com/problemset/problem/1934/A
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        vector<int>vec;
        for (int i = 0; i < n; i++)
        {
            int a ; cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        int min1 = vec[0];
        int min2= vec[1];
        int max1 = vec[n-1];
        int max2= vec[n-2];
        int result = 2*((max1+max2)-(min1+min2));
        cout<<result<<endl; 
    }
    return 0;
}
/* ei problem ta tea jodi amra 2 ta min ber kori ar 2 ta max ber kore 2 dara multipication kori tahole ata solve hoy */