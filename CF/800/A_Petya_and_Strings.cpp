#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i = 0;i<=s1.size();i++){
        if(s1[i]>96){
            s1[i]=s1[i]-' ';
        }
    }
    for(int i = 0;i<=s2.size();i++){
        if(s2[i]>96){
            s2[i]=s2[i]-' ';
        }
    }
    if(s1>s2) cout<<1;
    else if(s1<s2) cout<<-1;
    else cout<<0;
    return 0;
}