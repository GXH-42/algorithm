#include <iostream>
#include <iomanip>
using namespace std;
/*
 * 主函数
 * 功能：读取两个数值，进行计算并输出结果
 */
int main(){
    double t;  // 定义双精度浮点型变量t，用于存储被除数
    int n;     // 定义整型变量n，用于存储除数
    cin>>t>>n; // 从标准输入读取两个数值，分别赋值给t和n
    // 输出t除以n的结果，保留3位小数，然后换行，再输出n的两倍
    cout<<fixed<<setprecision(3)<<t/n<<endl<<2*n;
    return 0;  // 程序正常结束，返回0
}