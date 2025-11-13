#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin>>a>>b;
    int remainder = a%b;
    int count = (remainder == 0 ) ? 0:(b-remainder);
    cout<<count<<endl; 
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