#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

void print1(Point p)
{
    cout << &p << endl;
}

void print2(Point *p)
{
    cout << p << endl;
}

int main()
{
    Point p;
    p.x = 1;
    p.y = 1;
    cout << &p << endl;
    print1(p);
    print2(&p);
}

//Output:
//0x61fe18
//0x61fdf0
//0x61fe18
