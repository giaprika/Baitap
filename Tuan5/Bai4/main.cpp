#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> mp;
vector<int> a(1, 1);
vector<int> Pascal(int n)
{
    vector<int> res(n, 1);
    if( n==2 ){
        mp[n]=res;
        return res;
    }
    vector<int> tmp = Pascal(n-1);
    for(int i=1; i<n-1; i++){
        res[i]=tmp[i]+tmp[i-1];
    }
    mp[n]=res;
    return res;
}

int main()
{
    mp[1]=a;
    int n;
    cin>>n;
    Pascal(n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<mp[i].size(); j++) cout<<setw(3)<<mp[i][j]<<" ";
        cout<<endl;
    }

}
