#include <iostream>
#include <cmath>

using namespace std;
int isPrimeNumber(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int isPalindromesNumber(int num){
    if (num % 10 == 0) return 0;
    int reversed = 0;
    // 当原始数字大于反转后的数字时继续
    while (num > reversed) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    // 数字长度为偶数：num == reversed
    // 数字长度为奇数：num == reversed / 10
    return num == reversed || num == reversed / 10;
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrimeNumber(i)&&isPalindromesNumber(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}