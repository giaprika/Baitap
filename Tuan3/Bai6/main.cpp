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
    cout<<ship.id<<":  "<<ship.r.x<<" "<<ship.r.y<<endl;
}

bool check(Ship s1, Ship s2){
    if(s1.r.x <= s2.r.x && s1.r.y <= s2.r.y){
        if(s1.r.x+s1.r.w >= s2.r.x && s1.r.y+s1.r.h >= s2.r.y) return false;
        else return true;
    }
    else if(s1.r.x >= s2.r.x && s1.r.y <= s2.r.y){
        if(s2.r.x+s2.r.w >= s1.r.x && s1.r.y+s1.r.h >= s2.r.y) return false;
        else return true;
    }
    else if(s1.r.x >= s2.r.x && s1.r.y >= s2.r.y){
        if(s2.r.x+s2.r.w >= s1.r.x && s2.r.y+s2.r.h >= s1.r.y) return false;
        else return true;
    }
    else if(s1.r.x <= s2.r.x && s1.r.y >= s2.r.y){
        if(s1.r.x+s1.r.w >= s2.r.x && s2.r.y+s2.r.h >= s1.r.y) return false;
        else return true;
    }
}

int main(){
    rect r1, r2;
    cin>>r1.x>>r1.y>>r1.w>>r1.h;
    cin>>r2.x>>r2.y>>r2.w>>r2.h;
    int vx1, vy1, vx2, vy2;
    string c1, c2;
    cin>>vx1>>vy1>>c1;
    cin>>vx2>>vy2>>c2;
    Ship s1(r1, vx1, vy1, c1);
    Ship s2(r2, vx2, vy2, c2);
    int t=10;
    while(check(s1, s2) && t>0){
        display(s1);
        display(s2);
        s1.move();
        s2.move();
        t--;
    }
}
