#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    string s=to_string(n);
    int l=0, r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;

    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a, b;
        cin>>a>>b;
        int cnt=0;
        for(int i=a; i<=b; i++){
            if(check(i)) cnt++;

        }
        cout<<cnt<<endl;
        t--;
    }
}
