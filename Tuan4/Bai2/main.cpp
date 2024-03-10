#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int l=0, r=n-1;
    bool check=true;
    while(l<r){
        if(s[l]!=s[r]){
            check=false;
            cout<<"No";
            break;
        }
        l++;
        r--;
    }
    if(check) cout<<"Yes";
}
