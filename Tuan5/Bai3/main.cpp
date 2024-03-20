#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={0};
    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++){
        cin>>b[i];
        a[b[i]]++;
    }
    for(int i=0; i<10; i++){
        cout<<i<<" : "<<a[i]<<endl;
    }
}
