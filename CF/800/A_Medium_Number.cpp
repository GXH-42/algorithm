#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int a[3];
    int max=INT_MIN;
    int min=INT_MAX;
    int sum=0;
    for(int i = 0;i<3;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
        sum+=a[i];
    }
    
    cout<<sum-min-max<<endl;
    
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--) solve();
}