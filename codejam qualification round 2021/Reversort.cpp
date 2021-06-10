/* Nitin Madhukar */
#include<bits/stdc++.h>

#define ll              long long
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
void reverse(vector<ll>&a,ll k,ll st)
{
    ll n=a.size();
    if (k > n)
    {
        return;
    }
    for (int i = st; i < k/2; i++)
        swap(a[i], a[k-i-1]);
}
ll solve(vector<ll> &a){
    ll n=a.size();
    vector<ll> t=a;
    sort(t.begin(),t.end());
    // if(t==a){
    //     return n-1;
    // }
    // // reverse(t.begin(),t.end());
    // if(t==a){
    //     return n+n-2;
    // }
    ll ans=0;
    for(ll i=0;i<n-1;i++){
        auto j=min_element(a.begin()+i,a.end());
        reverse(a.begin()+i,j+1);
        ans+=j-(a.begin()+i)+1;
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        ll n;cin>>n;
        vector<ll>a(n);for(auto &i:a)cin>>i;
        cout<<"Case #"<<i+1<<": "<<solve(a)<<endl;
    }

return 0;
}