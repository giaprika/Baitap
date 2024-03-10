#include <bits/stdc++.h>
using namespace std;
int main(){
    int firstNumber;
    cin>>firstNumber;
    int tmp=firstNumber;
    cout<<firstNumber<<endl;
    int n;
    if(firstNumber>0){
        do{
            cin>>n;
            if(n!=tmp){
                cout<<n<<endl;
                tmp=n;
            }
        }while(n>=0);
    }

}
