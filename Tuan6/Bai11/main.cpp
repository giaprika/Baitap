#include <bits/stdc++.h>
using namespace std;

string doicoso(int n)
{
    string result="";
    while(n>0){
        int res=n%2;
        result=to_string(res)+result;
        n/=2;
    }
    return result;

}
int main()
{
    int n;
    cin>>n;
    cout<<doicoso(n);
}
