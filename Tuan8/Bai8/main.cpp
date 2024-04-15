#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    Point p;
    p.x = 1;
    p.y = 10;
    cout<< &p.x <<" "<< &p.y << endl << &p;

}

// Địa chỉ của biến p và trường p.x trùng nhau và sát với địa chỉ của trường p.y

//Output:
//0x61fe18 0x61fe1c
//0x61fe18
