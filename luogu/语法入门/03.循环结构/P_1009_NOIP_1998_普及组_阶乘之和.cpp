#include<iostream>
#include<cstring>
using namespace std;

int n;
int fact[90], sum[90], temp[90]; // 使用固定大小数组

int main() {
    cin >> n;
    
    // 初始化
    memset(fact, 0, sizeof(fact));
    memset(sum, 0, sizeof(sum));
    fact[0] = 1; // 0! = 1
    
    for(int i = 1; i <= n; i++) {
        // 计算 i! = (i-1)! * i
        memset(temp, 0, sizeof(temp));
        
        // 将i分解为数字
        int digits[10], len_i = 0;
        int t = i;
        while(t > 0) {
            digits[len_i++] = t % 10;
            t /= 10;
        }
        
        // 高精度乘法
        for(int j = 0; j < len_i; j++) {
            for(int k = 0; k < 90; k++) {
                if(fact[k] == 0 && k > 50) continue; // 小优化：跳过明显为0的位
                temp[j + k] += digits[j] * fact[k];
            }
        }
        
        // 处理进位
        for(int j = 0; j < 89; j++) {
            if(temp[j] > 9) {
                temp[j + 1] += temp[j] / 10;
                temp[j] %= 10;
            }
        }
        
        // 更新阶乘值
        memcpy(fact, temp, sizeof(fact));
        
        // 将当前阶乘加到总和中
        for(int j = 0; j < 89; j++) {
            sum[j] += fact[j];
            if(sum[j] > 9) {
                sum[j + 1] += sum[j] / 10;
                sum[j] %= 10;
            }
        }
    }
    
    // 输出结果
    int pos = 89;
    while(pos > 0 && sum[pos] == 0) pos--;
    for(int i = pos; i >= 0; i--) {
        cout << sum[i];
    }
    cout << endl;
    
    return 0;
}