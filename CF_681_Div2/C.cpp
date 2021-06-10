#include <bits/stdc++.h>
using namespace std;

template <typename T>
using Vec = std::vector<T>;

typedef Vec<int> VI;
typedef Vec<VI> VII;
typedef std::pair<int, int> P;
typedef std::tuple<int, int, int> T;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n),b(n),in(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
            std::iota(in.begin(), in.end(), 0);

        sort(in.begin(),in.end(),[&](int ar,int br){
            return a[ar]>a[br];
        });
        int64_t ans=a[in[0]],md=0;
        for(auto i:in){
            ans=min(ans,max(md,int64_t(a[i])));
            md+=b[i];
        }
        cout<<min(ans,md)<<endl;
    }
    return 0;
}
