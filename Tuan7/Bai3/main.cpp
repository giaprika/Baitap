#include <bits/stdc++.h>
using namespace std;

int tknhiphan(int* a, int n, int x)
{
    int l=0, r=n-1;
    int res=-1;
    while(l<=r){
        int m = (l+r)/2;
        if(*(a+m) == x){
            res=m;
            r=m-1;
        }
        if(*(a+m) > x){
            r=m-1;
        }
        if(*(a+m) < x){
            l=m+1;
        }
    }
    return res;
}

int main()
{
    int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* p=a;
    cout<<tknhiphan(p, 10, 5);
}
