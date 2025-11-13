#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    int a= 1;
    for(int i = 1 ;i <= n ;i++){
        for(int j = n-i+1; j >= 1; j--){
            cout<<setw(2)<<setfill('0')<<a;
            a++;
        }
        cout<<endl;
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}