#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){

    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1;i <= n; i++){
        sum += i;
    }
    cout<<sum;
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}