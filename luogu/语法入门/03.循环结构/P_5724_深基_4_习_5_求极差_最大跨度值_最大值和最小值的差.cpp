#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){

    int n ;
    cin >> n;

    int max=INT_MIN,min=INT_MAX;
    for(int i = 0;i < n;i++){
        int a;
        cin>>a;
        if(a>max) max=a;
        if(a<min) min=a;
    }
    cout<<max-min;
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}