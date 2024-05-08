#include <bits/stdc++.h>
using namespace std;

char* Reverse(const char a[])
{
    int n = strlen(a);
    char* result = new char [n+1];
    int d = n-1;
    for(int i=0; i<n; i++){
        *(result+i) = a[d];
        d--;
    }
    *(result+n) = '\0';
    return result;
}

int main()
{
    char a[6] = "Hello";
    char* result = Reverse(a);
    int n= strlen(result);
    for(int i=0; i<n; i++) cout<<*(result+i);
    delete[] result;
}
