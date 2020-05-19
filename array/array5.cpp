#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n; cin>>n;
  map<int,int>m;
  
  for(int i=0; i<n; i++){ 
     int x; cin>>x;
     m[x]++;
  }
  int count=0;
  
  for(auto it = m.begin(); it!= m.end(); ++it){ 
     if(it->second==1)
     count++;
  }
  cout<<count<<endl;
  
  return 0;
}
