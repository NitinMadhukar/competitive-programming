/* Nitin Madhukar */
#include<bits/stdc++.h>
#include <algorithm>

#define ll              long long
#define mp              make_pair
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vll             vector<ll>
#define vvi             vector<vi>
#define vvll            vector<vll>
#define pi              pair<int,int>
#define pll             pair<ll,ll>

#define PI              3.14159265
#define MOD             (int)1000000007
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

#define IN              cin >>
#define OUT             cout <<
#define endl            "\n"
#define all(a)          (a).begin(), (a).end()
#define allr(a)         (a).rbegin(), (a).rend()
#define pb              push_back
#define fi              first
#define se              second
#define write(a)          \
    for (auto x : a)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl;
#define read(a)       \
    for (auto &x : a) \
    {                 \
        cin >> x;     \
    }

using namespace std;

void solve() {
   ll n;cin>>n;
   set<ll>st;
   vector<ll> a(n);
   for(auto &i:a){cin>>i;st.insert(i);}
   queue<ll>q;
   for(ll i=1;i<n;i++){
       for(ll j=0;j<i;j++){
           q.push(abs(a[i]-a[j]));
       }
   }
   while(!q.empty() and st.size()<=300){
       ll fr=q.front();
       q.pop();
       if(!st.count(fr)){
           for(ll i=0;i<a.size();i++)q.push(abs(fr-a[i]));
            a.push_back(fr);
            st.insert(fr);
       }
   }
   if(st.size()>300){
       cout<<"NO\n";
       return;
   }
   cout<<"YES\n";
   cout<<st.size()<<endl;
   for(auto i:st)cout<<i<<" ";
   cout<<'\n';
   return;
}
int main(){
    IOS();
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}