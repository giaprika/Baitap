#include <bits/stdc++.h>
using namespace std;

// char str[];
// char str[4]="abcd";
// char str[3]="abcd";
 char str1[6]="abcd";
 char str3[]="abcd";
int main(){
    // char str[];
    // char str[4];
    // char str[3];
    char str2[6]="abcd";
    char str4[]="abcd";
    for(char s : str1) cout<<s;
    cout<<endl<<str1<<endl;

    for(char s : str2) cout<<s;
    cout<<endl<<str2<<endl;

    for(char s : str3) cout<<s;
    cout<<endl<<str3<<endl<<sizeof(str3)<<endl;

    for(char s : str4) cout<<s;
    cout<<endl<<str4<<endl<<sizeof(str4)<<endl;

}
