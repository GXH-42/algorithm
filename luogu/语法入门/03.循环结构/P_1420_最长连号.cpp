#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n,ans=0,temp,b,max=1;
    cin>>n;
    cin>>b;
    for(int i = 1;i<=n-1;i++){
        cin>>temp;
        if(temp==b+1) max++;
        else max=1;
        if(ans<max) ans=max;
        b=temp;
    }
    cout<<ans;

}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}