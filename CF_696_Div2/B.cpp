#include <bits/stdc++.h>  // This will work only for g++ compiler.


#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

//sh    ort hand for usual tokens
#define pb push_back
#define fi first
#define se second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())


using namespace std;

// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
#define mod 1000000007

int main() {
  int t;cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      vector<ll> ar(n);
      int ass[10000];
      for(int i=0;i<n;i++)cin>>ar[i];
            for(int i=0;i<10000;i++)ass[i]=i;

      sort(ar.begin(),ar.end());
      reverse(ar.begin(),ar.end());
      reverse(ar.begin(),ar.end());
      for(int i=0;i<10000;i++)ass[i]=i;
      ll ans=ar[n-1];
      for(int i=2;i<=k+1;i++)ans+=ar[n-i];
    //   ans+=ar[n-k];
    //   ans%=mod;
            for(int i=0;i<10000;i++)ass[i]=i;

      cout<<ans<<endl;
  }
  return 0;
}
