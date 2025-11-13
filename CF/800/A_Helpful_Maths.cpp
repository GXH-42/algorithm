#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    //将字符串中的数字提取出来，并存储到数组中
    vector<int> a;
    for(int i=0;i<s.size();i++){
        if(s[i]>='1'&&s[i]<='3'){
             // 主要修正：Vector使用方式
            // 原代码：a[i] = s[i] ❌
            // 修正后：a.push_back(s[i] - '0') ✅
            // 解释：vector开始时是空的，不能直接通过索引赋值。应该使用push_back添加元素。
            a.push_back(s[i]-'0');// 将字符转换为数字并添加到vector中
        }    
    }
    //排序数组
    sort(a.begin(),a.end());

    //将数组输出，并添加“+”
    for(int i = 0; i<a.size(); i++){
        cout<<a[i];
        if(i!=a.size()-1){
            cout<<"+";
        }
    }
    return 0;
}