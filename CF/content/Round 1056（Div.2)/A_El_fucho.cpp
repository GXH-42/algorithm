#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long
int n,t,winners,losers,ans;
void solve(){
    cin>>n;
    winners = n;
    losers = 0;
    ans = 0;

    while(max(losers,winners)>1){
        ans += losers/2;
        losers = (losers + 1 )/2;

        ans += winners/2;
        losers += winners/2;
        winners = (winners + 1 ) / 2;
    }

    ans++;
    
    cout<<ans<<endl;;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>t;
    while(t--){
        solve();
    }
}