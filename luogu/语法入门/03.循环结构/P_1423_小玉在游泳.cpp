#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    double f,s=2;
    cin >> f;
    int ans = 0;

    while(f>0){
        f=f-s;
        s*=0.98;
        ans++;
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