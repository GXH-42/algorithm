#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long
int a=1,b=1,c=0;
int n,i;
void solve(){
    cin>>n;
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<".00";
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}