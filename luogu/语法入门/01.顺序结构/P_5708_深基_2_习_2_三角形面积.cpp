#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    double p=(a+b+c)/2;
    double sum=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<sum;
    return 0;
}