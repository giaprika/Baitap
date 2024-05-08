#include <bits/stdc++.h>
using namespace std;

char* trim_left(const char a[])
{
    int d = strlen(a);
    int i=0;
    while(a[i] == ' ' && i<d) i++;
    char* result = new char[d-i+1];
    for(int j=0; j<d-i; j++){
        *(result+j) = a[i+j];
    }
    *(result+d-i) = '\0';
    return result;
}

int main()
{
    char a[8] ="  hello";
    char* result = trim_left(a);
    cout<<result;
    delete[] result;
}
