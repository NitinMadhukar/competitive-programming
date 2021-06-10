#include<bits/stdc++.h>

#define ll             long long
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vvi             vector<vi>
#define pi              pair<int,int>

#define PI              3.14159265
#define M               (int)1000000007
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;
using pll = pair<ll, ll>;   

//Code begins from here!!

#define mxn 1000

// bool checkDivisibility(ll n) 
// { 
//   ll x=n;
//   while(x){
//       ll a=x%10;
//       x/=10;
//       if(a!=0){
//           if(n%a!=0)return false;
//       }
//   }
//   return true;
// } 
// bool flag=false;

// ll bfs(set<ll>adj[],vector<ll>&vis,ll i, ll mc,ll par)
// {
//  vis[i]=mc;
//  ll res=1;
//  for(auto j:adj[i]){
//    if((j!=par)&&(par!=-1)&&vis[j]==mc) flag=true;
//    else if(vis[j]==0) res+=bfs(adj,vis,j,mc,i);

//  }
//  return res;
// } 
bool dfs(int i,vector<ll> adj[],vector<bool> &res,vector<bool> &vis){
    if(!vis[i]){
        vis[i]=res[i]=1;
        for(auto v:adj[i]){
            if((!vis[v]&&dfs(v,adj,res,vis))|| res[v])
            return 1;
        }
    }
    res[i]=0;
    return false;
}
void solve() {
    ll n,m,x,y;
    cin>>n>>m;
    ll cnt=0;
    vector<pair<ll,ll>> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i].first>>v[i].second;
    }
    vector<ll> adj[n+1];
    for(ll i=0;i<m;i++){
        if(v[i].first!=v[i].second){cnt++;
        adj[v[i].first].push_back(v[i].second);}
    }
    vector<bool> vis(n+1,false),res(n+1,false);
    
    for(int i=1;i<=n;i++){
        if(!vis[i]&&dfs(i,adj,res,vis))
        cnt++;
    }
  cout<<cnt<<endl;
}
int main(){
   int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}