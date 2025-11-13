#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    //用于记录每个字母是否出现过
    bool seen[26]={0};
    int count=0;
    for(int i = 0; i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
        int index=s[i]-'a';
        if(!seen[index]) {
        seen[index]=1;
        count++;
    }
    }
    }
    
   
    if(count % 2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}