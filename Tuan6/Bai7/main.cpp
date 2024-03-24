#include <bits/stdc++.h>
using namespace std;

void print(int m, int n)
{
    for(int i=0; i<m; i++) cout<<' ';
    for(int i=0; i<n; i++) cout<<'*';
    for(int i=0; i<m; i++) cout<<' ';
    cout<<endl;
}

int main()
{
    int x;
    cin>>x;
    int m=x-1, n=1;
    while(x>0){
        print(m, n);
        m--;
        n+=2;
        x--;
    }
}
