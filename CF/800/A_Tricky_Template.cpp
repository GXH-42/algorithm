#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

void solve(){
   int n;
    cin >> n;  // 读取字符串长度
    string a, b, c;
    cin >> a >> b >> c;  // 读取三个字符串

    bool found = false;
    for (int i = 0; i < n; i++) {
         if (a[i] != c[i] && b[i] != c[i]) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;  // 如果找到满足条件的字符
    } else {
        cout << "NO" << endl;  // 否则输出NO
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