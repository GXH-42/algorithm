#include <bits/stdc++.h>


using namespace std;

int main(){
    //输入数据
    int n;
    cin>>n;

    //采用商和余数进行计算
    int step=n/5;
    if(n%5!=0) step+=1;
    cout<<step;
    return 0;
}