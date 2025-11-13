#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long
int n,k,l,c,d,p,nl,np;

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    
    int a=(k*l)/(nl*n);
    int b = c*d/n;
    int c =p/(np*n);
    int total=min(min(a,b),c);
    cout<<total<<endl;
}