#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    int a[n];

    for(int i = 0;i < n; i++){
        cin>>a[i];
    }
    int max=1;
    int min=INT_MAX;
    for(int i = 0;i < n; i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
        
    }
    cout<<max-min<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--) solve();
}