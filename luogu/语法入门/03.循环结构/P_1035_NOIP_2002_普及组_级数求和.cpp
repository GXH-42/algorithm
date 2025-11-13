#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int k,i=1;
    cin>>k;

    double sum=0;
    while (sum<=k) {
        sum+=1.0/i;
        i++;
    }
    cout<<i-1;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}