#include <bits/stdc++.h>
using namespace std;

char* concat(const char* a, const char* b)
{
    int n = strlen(a), m = strlen(b);
    char* result = new char [n+m+1];
    strcpy(result, a);
    strcat(result, b);
    return result;
}

int main()
{
    char* result = concat("hello", " world");
    cout<<result;
    delete [] result;
}
