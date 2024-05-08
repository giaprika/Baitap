#include <bits/stdc++.h>
using namespace std;

char* pad_right(const char a[], const int n)
{
    int d = strlen(a);
    if(d>=n){
        char* result = new char [d+1];
        for(int i=0; i<d; i++){
            *(result+i) = a[d];
        }
        return result;
    }
    char* result = new char[n+1];
    for(int i=0; i<d; i++){
        *(result+i) = a[i];
    }
    for(int i=d; i<n; i++){
        *(result+i) = ' ';
    }
    *(result+n) = '\0';
    return result;
}

int main()
{
    char a[6]= "hello";
    char* result = pad_right(a, 8);
    cout<<result<<'.';
    delete[] result;
}
