#include <bits/stdc++.h>


using namespace std;

int main(){
    //输入字符串
    string s;
    getline(cin,s);

    //将字符串统一处理为小写字母
    /*for(int i =0; i<s.size(); i++){
        if(isupper(s[i])) s[i]=tolower(s[i]);
    }*/

    s[0]=toupper(s[0]);

    cout<<s<<endl;

    return 0;
}