#include <iostream>
using namespace std;
int main(){
    int n,a[30],cnt = 0;//a 用来存储元素, cnt 用来记录元素个数 
	long long sum = 0;  //sum 用来存储所有元素的和 
	while (cin >> n) {  //输入数据 
		a[cnt] = n;//输入一个元素后, 存储当前的元素 
		sum += n;  //把元素的值累加到 sum 里面 
		cnt++;
	}
	long long ans = sum * (1LL << (cnt - 1));//这里就是最后的答案了
	cout << ans << endl;
	return 0;
    
}