

#include <bits/stdc++.h>  // This will work only for g++ compiler.


using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
                int ans=n*2;
        cout<<ans<<" ";
        for(int i=0;i<n-1;i++){
            ans+=2;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}