#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x;
    int y;

};

Point tang(Point p){
    p.x++;
    p.y++;
    return p;
}

Point tang1(Point &p){
    p.x++;
    p.y++;
    return p;
}

void print(Point p){
    cout<<p.x<<" "<<p.y<<endl;
}

int main(){
    Point p;
    cin>>p.x>>p.y;
    tang(p);
    print(p);
    tang1(p);
    print(p);

}
