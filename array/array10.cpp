#include <bits/stdc++.h>
using namespace std;

int main()
{
    //write your code here

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int x=0,y=n-1;
        for(int j=0; j<n/2; ++j){
            cout<<a[y]<<" ";
            cout<<a[x]<<" ";
            x++;y--;
        }
        if(n&1)
            cout<<a[x]<<endl;
    }
    return 0;
}
