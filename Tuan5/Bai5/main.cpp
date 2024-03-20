#include <bits/stdc++.h>
using namespace std;
struct sv
{
    string name;
    double toan;
    double ly;
    double anh;
    double tb()
    {
        return (toan + ly + anh)/3;
    }
};

bool cmpt(sv sv1, sv sv2)
{
    return sv1.toan >= sv2.toan;
}

bool cmpl(sv sv1, sv sv2)
{
    return sv1.ly >= sv2.ly;
}

bool cmptb(sv sv1, sv sv2)
{
    return sv1.tb() >= sv2.tb();
}
int main()
{
    int n;
    cin>>n;
    sv a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].toan>>a[i].ly>>a[i].anh;
    }
    sort(a, a+n, cmpt);
    cout<<"Danh sach theo diem toan"<<endl;
    for(auto x : a){
        cout<<x. name<<" : "<<x.toan<<" "<<x.ly<<" "<<x.anh<<endl;
    }
    sort(a, a+n, cmpl);
    cout<<"Danh sach theo diem ly"<<endl;
    for(auto x : a){
        cout<<x. name<<" : "<<x.toan<<" "<<x.ly<<" "<<x.anh<<endl;
    }
    sort(a, a+n, cmptb);
    cout<<"Danh sach theo diem tb"<<endl;
    for(auto x : a){
        cout<<x. name<<" : "<<x.toan<<" "<<x.ly<<" "<<x.anh<<endl;
    }

}
