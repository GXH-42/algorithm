#include <iostream>
using namespace std;
const long long N=1e4+10;
long long l,m;
long long int ans;
bool st[N];
int main(){
    cin>>l>>m;

    while(m--){

        long long x,y;
        cin>>x>>y;
        for(long long i=x;i<=y;i++){
            st[i]=true;
        }
    }
    for(long long i=0;i<=l;i++){
        if(!st[i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}