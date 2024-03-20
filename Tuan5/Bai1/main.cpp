#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    double sum=0;
    for(int &x : a){
        cin>>x;
        sum+=x;
    }
    double tb=sum/n;
    double tbp=0;
    for(int x : a){
        tbp+=(x-tb)*(x-tb);
    }
    double phuongsai = tbp/n;
    cout<<fixed<<setprecision(2)<<tb<<" "<<phuongsai<<endl;

}
