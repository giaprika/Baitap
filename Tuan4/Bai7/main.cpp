#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cnt=n-1;
    int result=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        result+=cnt*a[i];
        cnt--;
    }
    cout<<result;
}
