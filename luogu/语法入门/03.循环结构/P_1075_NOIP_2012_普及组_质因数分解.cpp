#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { // 首先检查 i 是否是 n 的因数
            if (is_prime(i) && is_prime(n / i)) {
                cout << max(i, n / i) << endl;
                return;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}