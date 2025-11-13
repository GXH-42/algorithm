#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    int maxCnt=0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        if (a[i]==0) {
            cnt++;
        }
        if(cnt>maxCnt)maxCnt=cnt;
        if(a[i]==1){
            cnt=0;
        }

    }
    cout<<maxCnt<<endl;
    
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--) solve();
} 