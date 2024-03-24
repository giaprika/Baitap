#include <bits/stdc++.h>
using namespace std;

bool ok=false;

void bo3(int a[], int n)
{
    sort(a, a+n);
    int index[3]={0, 1, 2};
    int i=2;
    while(!ok){
        if((a[index[0]] + a[index[1]] + a[index[2]]) % 25 ==0){
            for(int i=0; i<3; i++) cout<<a[index[i]]<<" ";
            cout<<endl;
        }
        while(i>=0 && index[i]==n-(3-i)){
            i--;
        }
        if(i<0) ok=true;
        else{
            index[i]++;
            for(int j=i+1; j<3; j++) index[j]=index[j-1]+1;
        }
    }

}

int main()
{
    srand(time(NULL));
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) a[i]=rand() % 50;

    for(int x : a) cout<<x<<" ";

    cout<<endl;

    bo3(a, n);
}
