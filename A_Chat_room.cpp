#include <bits/stdc++.h>
using namespace std;

int main(){
    string s ; cin>>s;
    int h=0 ,e=0,l=0,o=0;
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]='h'){
            h++;
        }
        if(s[i]='e'){
            e++;
        }
        if(s[i]='l'){
            l++;
        }
        if(s[i]='o'){
            o++;
        }
    }
    if((h>=1)&&(e>=1)&&(l>=2)&&(o>=0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}