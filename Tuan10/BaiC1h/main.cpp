#include <bits/stdc++.h>
using namespace std;

char* trim_right(const char a[])
{
    int d = strlen(a)-1;
    while(d>=0 && a[d]==' ') d--;
    char* result = new char [d+2];
    for(int i=0; i<=d; i++){
        *(result+i) = a[i];
    }
    *(result+d+1) ='\0';
    return result;
}

int main()
{
    char a[10] ="hello    ";
    char* result = trim_right(a);
    cout<<result<<'.';
    delete[] result;
}
