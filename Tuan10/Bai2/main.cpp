#include <bits/stdc++.h>
using namespace std;

int  main()
{
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p;
     *p2 = 100; // dòng này lỗi vì vùng nhớ mà p2 trỏ tới đã bị giải phóng bởi lệnh ở dòng 9 nên việc gán giá trị cho vùng nhớ đó là không xác định
     cout << *p2; // dòng này cũng lỗi vì in ra giá trị của vùng nhớ đã bị giải phóng
     delete p2; // dòng này lõi do vùng nhớ mà p2 trỏ tới đã được giải phóng trước đó
}
