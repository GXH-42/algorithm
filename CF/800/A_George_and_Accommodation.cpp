#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long


signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    int n;
    cin>>n;
    int ans=0;
    for(int i = 0;i<n;i++){
        int p,q;
        cin>>p>>q;

        if(q-p>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
}