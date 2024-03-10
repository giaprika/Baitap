#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int a[m][n];
    int cnt=1;
    int l=0, r=n-1, t=0, b=m-1;
    while(cnt<m*n){
            for(int i=l; i<=r; i++){
                if(cnt<=m*n){
                    a[t][i]=cnt;
                    cnt++;
                }
            }
            t++;

            for(int i=t; i<=b; i++){
                if(cnt<=m*n){
                    a[i][r]=cnt;
                    cnt++;
                }
            }
            r--;

            for(int i=r; i>=l; i--){
                if(cnt<=m*n){
                    a[b][i]=cnt;
                    cnt++;
                }
            }
            b--;


            for(int i=b; i>=t; i--){
                if(cnt<=m*n){
                    a[i][l]=cnt;
                    cnt++;
                }
            }
            l++;

    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
