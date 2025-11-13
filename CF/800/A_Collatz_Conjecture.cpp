#include <algorithm>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;

        int current = x;
        for(int i = 0; i < k; i++){
            vector<int> options;
            //选项一
            options.push_back(current*2);
            //选项二
            if(i==k-1&&(current-1)/3==(current-1)/3.0){
                int candidate = (current-1)/3;
                if(candidate % 2 == 1 && candidate >= 1){
                    options.push_back(candidate);
                }
            }
          current = *min_element(options.begin(),options.end()) ;  
        }
        cout<< current << endl;
    }
    return 0;
}