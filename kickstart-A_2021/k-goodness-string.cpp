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

    
    ll solve(ll n,ll k,string a) {
       ll ans=0;
    //   if(n%2)n++;
       for(ll i=0;i<n/2;i++){
        //   cout<<a[i]<<" ";
           if(a[i]!=a[n-i-1])ans++;
       }
    //   cout<<ans;
       ll re=abs(ans-k);
       return re;
    }
    int main(){
        ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
        int t = 1;
        cin >> t;
    
        for (int i = 0; i < t; ++i){
            ll n,k;cin>>n>>k;
            string a;cin>>a;
            cout<<"Case #"<<i+1<<": "<<solve(n,k,a)<<endl;
        }
    
    
    return 0;
    }