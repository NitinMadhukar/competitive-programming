    
/* Editor : Nitin Madhukar
   IIIT ALLAHABAD */

#include <bits/stdc++.h>  // This will work only for g++ compiler.


using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        string a;cin>>a;
        vector<pair<char,int>> v;
        for(int i=0;i<a.length();i++){
            char c=a[i];
            int cnt=1;
            while(i<a.length()-1&&a[i+1]==c){
                i++,cnt++;
            }
            v.push_back({c,cnt});
        }
        if(v[v.size()-1].first=='0')v.pop_back();
        int si=v.size();
        int i=0;
        while(i<si){
            if(v[i].first=='1')break;
            else i++;
        }
        while(i<si){
            if(v[i].first=='1'){
                ans+=n;
            }
            else{
                int cntr=v[i].second;
                if(cntr*k<=n){
                    ans+=(cntr*k);
                    i++;
                }
            }
        i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}