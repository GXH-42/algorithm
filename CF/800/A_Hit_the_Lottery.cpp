#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long



signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    int n;
    cin>>n;
    int a[5]={100,20,10,5,1};
    int ans = 0;
    int i = 0 ;
    while(n!=0){
        
        ans += n / a[i];
        n = n % a[i];
        i++;
    }
    cout<<ans<<endl;
}