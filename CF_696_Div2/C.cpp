#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main() {
  int t;cin>>t;
  while(t--){
      int n;
      int falg=0;
      cin>>n;
      int k=n;
      if(n==2){
          cout<<2<<endl;
          cout<<1<<" "<<2<<endl;
      }
      else{
          cout<<2<<endl;
          cout<<n-2<<" "<<n<<endl;
          cout<<n-1<<" "<<n-1<<endl;
          falg=1;
      }
      if(falg){
           for(k-=1;k>2;k--)
          cout<<k<<" "<<k-2<<endl;
      }
  }
  return 0;
}
