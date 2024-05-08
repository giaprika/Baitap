#include <bits/stdc++.h>
using namespace std;

char* pad_left(const char a[], int n)
{
    int d = strlen(a);
    if(d>=n){
        char* result = new char [d+1];
        for(int i=0; i<d; i++){
            *(result+i) = a[d];
        }
        return result;
    }
    char* result = new char [n+1];
    int j=0;
    for(int i=0; i<n-d; i++){
        *(result+i) = ' ';
    }
    for(int i=n-d; i<n; i++){
        *(result+i) = a[j];
        j++;
    }
    *(result+n) = '\0';
    return result;
}

int main()
{
    char a[6]= "hello";
    char* result = pad_left(a, 8);
    cout<<result;
    delete[] result;
}
