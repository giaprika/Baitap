#include <bits/stdc++.h>
using namespace std;

char a[12][12];
int m, n, k;

void sinhmap()
{
    for (int i=0; i<m+2; i++){
        for(int j=0; j<n+2; j++){
            a[i][j]='.';
        }
    }
    while(k>0){
        int i= rand() %m+1;
        int j= rand() %n+1;
        if(a[i][j] == '.'){
            a[i][j]='*';
            k--;
        }
    }
}

void print(int x, int y)
{
    int cnt=0;
    for(int i=x-1; i<=x+1; i++){
        for(int j=y-1; j<=y+1; j++){
            if(a[i][j]=='*') cnt++;
        }
    }
    a[x][y]=cnt+'0';
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]=='.'||a[i][j]=='*') cout<<'x'<<" ";
            else cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    srand(time(NULL));
    cin>>m>>n>>k;
    int win=m*n-k;
    sinhmap();
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int x, y;
    while(win>0){
        cin>>x>>y;
        if(a[x][y]=='*'){
            break;
        }
        else{
            print(x, y);
            win--;
        }
    }
    if(win==0) cout<<"YOU WON"<<endl;
    else cout<<"YOU'RE DEAD!"<<endl;
}
