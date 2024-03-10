#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space=n-1;
    int sao=1;
    while(n>0){
        for(int i=0; i<space; i++) cout<<" ";
        for(int i=0; i<sao; i++) cout<<"*";
        for(int i=0; i<space; i++) cout<<" ";
        cout<<endl;
        sao+=2;
        space--;
        n--;
    }
}
