#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

struct List
{
    int a[3];
    Point p;
};

int main()
{
    List c;
    int b[3] = {1, 2, 3};
    Point P;
    P.x = 1;
    P.y = 1;
    for (int i=0; i<3; i++){
        c.a[i]=b[i];
    }
    c.p = P;
    List d = c;
    cout << &c.a <<" "<< &c.p << endl;
    cout << &d.a <<" "<< &d.p << endl;
    d.a[0] = 10;
    d.p.x = 5;
    cout << "c.a = ";
    for(int i=0; i<3; i++) cout << c.a[i] <<" ";
    cout<<endl;
    cout << "d.a = ";
    for(int i=0; i<3; i++) cout << d.a[i] <<" ";
    cout<<endl;
    cout << "c.p = " << c.p.x << " " << c.p.y << endl;
    cout << "d.p = " << d.p.x << " " << d.p.y << endl;
}

//Output:
//0x61fe00 0x61fe0c
//0x61fdd0 0x61fddc
//c.a = 1 2 3
//d.a = 10 2 3
//c.p = 1 1
//d.p = 5 1
