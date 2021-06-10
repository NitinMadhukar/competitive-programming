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

struct Matrix{
  double a[2][2]={{0,0},{0,0}};
  Matrix operator *(const Matrix& other){
    Matrix pro;
    for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
           pro.a[i][k]+=a[i][j]*other.a[j][k];
        }
      }
    }
    return pro;
  }
};

Matrix exp_pw(Matrix s,int k){
  Matrix pr;
  for(int i=0;i<2;i++)pr.a[i][i]=1;
    while(k>0){
      if(k%2)pr=pr*s;
      s=s*s;
      k/=2;
    }
    return pr;
}
void solve() {
    int n;cin>>n;
    double p;cin>>p;
    Matrix s;
    s.a[0][0]=1-p;
    s.a[0][1]=p;
    s.a[1][0]=p;
    s.a[1][1]=1-p;
    Matrix to=exp_pw(s,n);
    cout<<to.a[0][0]<<'\n';
}
int main(){
    int t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}