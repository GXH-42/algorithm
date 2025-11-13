#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int peach =1;
    for(int i=1;i<n;i++){
        peach+=1;
        peach*=2;
    }
    cout<<peach;
    return 0;
}