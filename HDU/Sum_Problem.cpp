#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n,sum=0;
    cin>>n;
    for(int i = 1 ;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    cin>>t;
    cout<<t<<endl<<endl;
    while(t--) solve();
}