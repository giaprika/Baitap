#include <bits/stdc++.h>
using namespace std;

struct rect{
    int x;
    int y;
    int w;
    int h;
};

struct Ship{
    rect r;
    int dx;
    int dy;
    string id;
    Ship(rect _r, int _dx, int _dy, string _id){
        r=_r;
        dx=_dx;
        dy=_dy;
        id=_id;
    }
    move(){
        r.x+=dx;
        r.y+=dy;
    }
};

display(const Ship &ship){
    cout<<ship.id<<endl<<ship.r.x<<" "<<ship.r.y<<endl;
}

int main(){
    rect r;
    cin>>r.x>>r.y>>r.w>>r.h;
    int vx, vy;
    string c;
    cin>>vx>>vy>>c;
    Ship s(r, vx, vy, c);
    s.move();
    display(s);
}
