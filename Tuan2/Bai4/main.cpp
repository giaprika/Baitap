#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=0; i<n; i++){
        for(int j=k; j<=n; j++) cout<<j<<" ";
        for(int j=1; j<k; j++) cout<<j<<" ";
        cout<<endl;
        k++;
    }
}
