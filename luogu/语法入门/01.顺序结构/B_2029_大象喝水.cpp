 #include <iostream>
 using namespace std;
 int main(){
    int h,r;
    cin>>h>>r;
    int tmp=3.14*r*r*h/1000;
    cout<<int((20+tmp-1)/tmp);
    return 0;
 }