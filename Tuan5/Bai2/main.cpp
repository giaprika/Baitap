#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int tongchan=0;
    int sole=0;
    cin>>n;
    int a[n];
    for(int &x : a)
    {
        cin>>x;
        if(x%2==0) tongchan+=x;
        else sole++;
    }
    cout<<*max_element(a, a+n)<<endl<<*min_element(a, a+n)<<endl<<tongchan<<endl<<sole<<endl;
}
