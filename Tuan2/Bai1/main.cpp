#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
    if(n==0||n==1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(snt(n)) cout<<"yes";
    else cout<<"no";
}
