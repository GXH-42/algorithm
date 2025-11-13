#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    int bai=n/100;
    int shi=n%100/10;
    int ge=n%10;
    int sum=bai+ge+shi;
    cout<<sum*100+sum*10+sum;
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}