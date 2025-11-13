#include <bits/stdc++.h>


using namespace std;

int main()
{
	int n,k,num=0;
    cin>>n>>k;
    int a[n];
    for(int i =0;i<n;i++){
        
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        if(a[i]-a[k]>0)
         num++;
    }
    cout << num;
    return 0;
 
}

