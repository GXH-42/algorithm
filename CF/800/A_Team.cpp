#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int n,ans=0;
    cin >> n;
    for(int i = 1; i <= n; i++ ){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }
    cout<<ans;
}
