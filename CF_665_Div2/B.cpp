#include<bits/stdc++.h>
using namespace std;
long long int ans(long long int a,long long int b,long long int c,long long int x,long long int y,long long int z){
    long long int a1=0,a2=0,a3=0;
    a1=min(c,y);
    c-=a1;
    y-=a1;
    a2=min(z,a);
    a-=a2;
    z-=a2;
    if(z){
        a2=min(c,z);
        c-=a2;
        z-=a2;
        if(z)a3=z;
    }
    return (a1*2)-(a3*2);
}
int main()
 {
     int t;cin>>t;
     while(t--){
        long long int a,b,c,x,y,z;cin>>a>>b>>c>>x>>y>>z;
        cout<<ans(a,b,c,x,y,z)<<endl;
     }
        return 0;
}
