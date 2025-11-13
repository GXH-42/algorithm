#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=0;
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        string s;
        cin>>s;
        if(s=="X++"||s=="++X"){
            x++;
        }
        else if(s=="X--"||s=="--X"){
            x--;
        }

    }
    cout<<x;
    return 0;
}
