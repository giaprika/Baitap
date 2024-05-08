#include <bits/stdc++.h>
using namespace std;

char* delete_char(const char a[], const char c)
{
    int n = strlen(a);
    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i] == c) cnt++;
    }
    char* result = new char [n+1-cnt];
    int d=0;
    for(int i=0; i<n-cnt; i++){
        while(a[d] == c) d++;
        *(result+i) = a[d];
        d++;
    }
    *(result+n-cnt) = '\0';
    return result;
}

int main()
{
    char a[6] = "hello";
    char c = 'l';
    char* result = delete_char(a, c);
    cout<<result;
    delete[] result;
}
