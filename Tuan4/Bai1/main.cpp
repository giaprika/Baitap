#include <bits/stdc++.h>
using namespace std;
int main(){
    int mp[10001]={0};
    int n;
    bool check=false;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    for(int i=0; i<n; i++){
        if(mp[a[i]]>1){
            check=true;
            cout<<"yes";
            break;
        }
    }
    if(!check) cout<<"no";
}
