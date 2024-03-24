#include <bits/stdc++.h>
using namespace std;

int rd(int n)
{
    return rand()%n;
}
int main()
{
    srand(time(NULL));
    int n;
    cin>>n;
    cout<<rd(n);
}
