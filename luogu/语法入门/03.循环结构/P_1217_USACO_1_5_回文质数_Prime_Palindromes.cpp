#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

bool is_prime(int n){
    if(n<2&&n%2==0) return false;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

bool is_palindromic(int n){
     if (n < 0 || (n % 10 == 0 && n != 0)) {
        return false;
    }
    
    int reversed = 0;
    // 当原始数字大于反转后的数字时继续
    while (n > reversed) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    // 对于偶数位和奇数位数字都适用
    return n == reversed || n == reversed / 10;
}

void solve(){
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(is_palindromic(i)&&is_prime(i))  cout<<i<<endl;
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}