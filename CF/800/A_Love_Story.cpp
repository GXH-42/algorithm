#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    string s,t;
    t="codeforces";
    cin>>s;


    int cnt=0;
    for(int i = 0; i<10;i++){
        if (s[i]!=t[i]) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--) solve();
}