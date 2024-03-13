#include <bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;
};

struct rect{
    int x;
    int y;
    int w;
    int h;

    bool contains(const point p) const{
        if(x<=p.x && p.x<=x+w && y<=p.y && p.y<=y+h) return true;
        else return false;
    }
};

int main(){
    point p;
    rect r;
    cin>>p.x>>p.y;
    cin>>r.x>>r.y>>r.w>>r.h;
    cout<<r.contains(p);
}
