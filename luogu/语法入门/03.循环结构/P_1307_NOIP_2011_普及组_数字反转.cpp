#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){

     int n;
     cin >> n;


    bool isNegative = false;
    if (n < 0) {
        isNegative = true;
        n = -n; // 转换为正数处理
    }

    // 反转数字
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

     

    if (isNegative) {
        cout << "-";
    }

     cout << reversed << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--) solve();
}