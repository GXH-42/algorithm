#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int s,v;
    cin>>s>>v;
    ///假设出发点为昨天的早上00：00
    ///计算最晚出发时间；已有时间24*60+8*60  -  花费时间
    int t=(s+v-1)/v+10;//路程所花费时间
    int tmp=8*60+24*60-t;// 计算最晚出发时间（分钟数）
    if(tmp>=24*60) tmp-=24*60;//如果tmp ≥ 1440分钟（24小时），说明计算结果落在第二天
    printf("%02d:%02d",tmp/60,tmp%60);
    

    return 0;
} 