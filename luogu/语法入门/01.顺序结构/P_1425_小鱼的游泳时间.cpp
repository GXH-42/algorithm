#include <iostream>
using namespace std;
int main(){
    int  a,b,c,d;
    cin>>a>>b>>c>>d;
    int tmp1=c-a,tmp2=d-b;
    if(tmp2<0){tmp1--;tmp2+=60;}
    cout<<tmp1<<" "<<tmp2;
    return 0;
}