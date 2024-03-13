#include <bits/stdc++.h>
using namespace std;

struct point{
    double x;
    double y;
    void print(){
        cout<<fixed<<setprecision(2)<<x<<" "<<y<<endl;
    }
};

point mid_point(const point a, const point b){
    point c;
    c.x=(a.x+b.x)/2;
    c.y=(a.y+b.y)/2;
    return c;

}

int main(){
    point a, b;
    cin>>a.x>>a.y>>b.x>>b.y;
    point c= mid_point(a, b);
    c.print();
}
