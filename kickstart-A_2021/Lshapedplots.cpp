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
    ll cal(ll a,ll b){
        if(a==1)return 0;
        return max(0LL,min(a-1,((b/2)-1)));
    }
    
    ll solve(ll n,ll k,vector<vector<ll>>&a) {
       ll ans=0;
       ll U[n][k],R[n][k],D[n][k],L[n][k];
       for(ll i=0;i<n;i++){
           ll cr=0;
           for(ll j=0;j<k;j++){
               if(a[i][j]==1)cr++; 
               else cr=0;
               L[i][j]=cr;
           }
       }
       for(ll i=0;i<n;i++){
           ll cr=0;
           for(ll j=k-1;j>=0;j--){
               if(a[i][j]==1)cr++; 
               else cr=0;
               R[i][j]=cr;
           }
       }
       for(ll i=0;i<k;i++){
           ll cr=0;
           for(ll j=0;j<n;j++){
               if(a[j][i]==1)cr++; 
               else cr=0;
               U[j][i]=cr;
           }
       }
       for(ll i=0;i<k;i++){
           ll cr=0;
           for(ll j=n-1;j>=0;j--){
               if(a[j][i]==1)cr++; 
               else cr=0;
               D[j][i]=cr;
           }
       }
       for(ll i=0;i<n;i++){
           for(ll j=0;j<k;j++){
               ans+=cal(U[i][j],L[i][j]);
               ans+=cal(U[i][j],R[i][j]);
               ans+=cal(D[i][j],L[i][j]);
               ans+=cal(D[i][j],R[i][j]);
               ans+=cal(L[i][j],U[i][j]);
               ans+=cal(L[i][j],D[i][j]);
               ans+=cal(R[i][j],U[i][j]);
               ans+=cal(R[i][j],D[i][j]);
               
           }
       }
       return ans;
    }
    int main(){
        ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
        int t = 1;
        cin >> t;
    
        for (int i = 0; i < t; ++i){
            ll n,k;cin>>n>>k;
            vector<vector<ll>> a(n,vector<ll>(k));
            for(ll i=0;i<n;i++)
            for(ll j=0;j<k;j++)cin>>a[i][j];
            cout<<"Case #"<<i+1<<": "<<solve(n,k,a)<<endl;
        }
    
    
    return 0;
    }