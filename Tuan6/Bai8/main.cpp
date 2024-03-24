#include <bits/stdc++.h>
using namespace std;

int rnd1(double n)
{
    double x=n-(int)n;
    if(x>=0.5) return ceil(n);
    else return floor(n);
}

int rnd2(double n)
{
    double x=n-(int)n;
    if(x>=0.5) return (int)n+1;
    else return (int)n;
}

int main()
{
    double n;
    cin>>n;
    cout<<rnd1(n)<<endl<<rnd2(n);
}
