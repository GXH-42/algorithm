#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

int a,cnt_negative,cnt_0;

void solve(){
    int n; 
    cin>>n;
    
    while(n--){
        cin>>a;
        if(a<0) cnt_negative++;
        if(a==0)cnt_0++;
    }
    if(cnt_negative%2||(cnt_0>0)){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }
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