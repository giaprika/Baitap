#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    char a[m+2][n+2];
    for(int i=0; i<m+2; i++){
        a[i][0]='.';
        a[i][n+1]='.';
    }
    for(int i=0; i<n+2; i++){
        a[0][i]='.';
        a[m+1][i]='.';
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            int cnt=0;
            if(a[i][j]!='*'){
                for(int x=i-1; x<=i+1; x++){
                    for(int y=j-1; y<=j+1; y++){
                        if(a[x][y]=='*') cnt++;
                    }
                }
                a[i][j]='0'+cnt;
            }
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
