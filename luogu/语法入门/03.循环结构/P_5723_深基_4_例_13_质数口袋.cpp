#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

 bool is_prime(int n){
    if(n<2) return false;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
 }

void solve(){
    int n;
    cin>>n;
    
    int sum = 0,total = 0;
    
    for(int i = 2; ;i++){
            
            if(is_prime(i)){
                sum+=i;
                if(sum>n) break;
                total++;
                cout<<i<<endl;
        }
       
     }
    
    
    cout<<total;
    
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}