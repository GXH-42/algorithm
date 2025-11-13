#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    int maxStab=0;
    if(m%2==1)
    {
     maxStab = (m/2)*n;
    }
    else{
        maxStab = m/2*n;//写了半天发现这道题真搞笑
    }
    cout<<maxStab<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}