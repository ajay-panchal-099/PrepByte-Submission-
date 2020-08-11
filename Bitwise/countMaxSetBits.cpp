#include<bits/stdc++.h>
using namespace std;


long long int countMaxSetBits(long long int left ,long long  int right){ 
  
  while( ( left  | (left+1) ) <=  right){ 
    left |= left | (left+1);
  }
  
  return left;
  
}


int main(){ 
  
  long int t;
  cin>>t;
  
  while(t--){ 
    long long int l , r;
    
    cin>>l>>r;
    
    
    cout<<countMaxSetBits(l,r)<<endl;
    
    
  }
  
  
}
