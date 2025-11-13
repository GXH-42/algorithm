#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
    //输入数据
    string s;
    getline(cin,s);

    //判断字符串中大小写字符的占比
    int upperCaseNumber=0;
    int lowerCaseNumber=0;

    for(int i = 0; i<s.size();i++){
        if(isupper(s[i]))  upperCaseNumber++;
        else                 lowerCaseNumber++;
    }
    
    //大小写功能转换 

    if(upperCaseNumber>lowerCaseNumber){
        for(int i = 0; i<s.size();i++)
        s[i]=toupper(s[i]);
    }else {
        for(int i = 0; i<s.size();i++)
        s[i]=tolower(s[i]);
    } 

    //for (char &c : s) {
    //c = upper > lower ? toupper(c) : tolower(c);
    //}
    cout<<s<<endl;

    return 0;
}