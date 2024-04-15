#include <bits/stdc++.h>
using namespace std;

struct String
{
    int n;
    char* str;
    String(const char* c)
    {
        n = strlen(c);
        str = new char[n+1];
        strcpy(str, c);
    }
    ~String()
    {
        delete[] str;
    }
    void print()
    {
        for(int i=0; i<n; i++) cout << *(str+i);
        cout<<endl;
    }
    void append(const char* c)
    {
        int len = strlen(c);
        char *tmp = new char [n + len + 1];
        for(int i=0; i<n; i++){
            *(tmp+i) = *(str+i);
        }
        for(int i=0; i<len; i++){
            *(tmp+n+i) = *(c+i);
        }
        delete[] str;
        str = tmp;
        n += len;
    }
};

int main()
{
    String s("hello");
    s.print();
    s.append(" you");
    s.print();

}
