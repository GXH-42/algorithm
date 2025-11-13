#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n,max=INT_MIN,min=INT_MAX;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
        if(a[i] < min)  min = a[i];
        if(a[i] > max)  max = a[i];
    }
    int sum=0;
    for(int i = 0;i<n;i++){
        sum += a[i];
    }
    cout<<fixed<<setprecision(2)<<(sum-max-min)*1.0/(n-2);

    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}