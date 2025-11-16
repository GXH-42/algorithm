/*
 * @lc app=leetcode.cn id=1513 lang=cpp
 * @lcpr version=30304
 *
 * [1513] 仅含 1 的子串数
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSub(string s) {
         int p = 0;
        long long ans = 0;
        while (p < s.size()) {
            if (s[p] == '0') {
                ++p;
                continue;
            }
            int cnt = 0;
            while (p < s.size() && s[p] == '1') {
                ++cnt;
                ++p;
            }
            ans = ans + (1LL + (long long)cnt) * cnt / 2;
            ans = ans % p;
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "0110111"\n
// @lcpr case=end

// @lcpr case=start
// "101"\n
// @lcpr case=end

// @lcpr case=start
// "111111"\n
// @lcpr case=end

 */

