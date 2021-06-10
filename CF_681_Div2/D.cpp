 
#include <bits/stdc++.h>  // This will work only for g++ compiler.
 
 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int c=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1])
            c+=a[i]-a[i-1];
        }
        if(c<0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
