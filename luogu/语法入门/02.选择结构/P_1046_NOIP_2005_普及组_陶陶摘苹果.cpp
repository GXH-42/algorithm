#include <iostream>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int h,total=0;
    cin>>h;

    for(int i=0;i<10;i++){
        if(a[i]<=h+30){
            total++;
        }
    }
    cout<<total;
    return 0;
}