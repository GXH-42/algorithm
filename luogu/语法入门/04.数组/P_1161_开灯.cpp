#include<iostream>
using namespace std;
long long n,t,ans,x;
double a;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a>>t;
        for(int i=1;i<=t;i++){
			x=(int)floor(a*i);//a*i为当前灯的编号
			ans^=x;
		}
	}
	cout<<ans;
	return 0;
}
