#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s>>t;
        int n=s.size(),m=t.size();
        int na=0,nb=0,ta=0,tb=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a') na++;
            else nb++;
        }
        for(int i=0;i<m;i++)
        {
            if(t[i]=='a') ta++;
            else tb++;
        }
        if(na==n || ta==m)
        {
            if(ta==m && na==n)
            {
                int l=(n*m)/__gcd(n,m);
                string ans;
                for(int i=0;i<l;i++)
                ans.push_back('a');
                
                cout<<ans<<endl;
            }
            else
            cout<<"-1\n";
        }
        
         else if(nb==n || tb==m)
        {
            if(tb==m && nb==n)
            {
                int l=(n*m)/__gcd(n,m);
                string ans;
                for(int i=0;i<l;i++)
                ans.push_back('b');
                
                cout<<ans<<endl;
            }
            else
            cout<<"-1\n";
        }
        
        else
        {
            int x= max(n,m)/min(n,m);
            string st;
            if(n>=m)
            {
                st=t;
                for(int i=0;i<x-1;i++)
                st.append(t);
                
                if(s==st)
                cout<<s<<endl;
                else
                cout<<"-1\n";
            }
            else
            {
                st=s;
                for(int i=0;i<x-1;i++)
                st.append(s);
                
                if(t==st)
                cout<<t<<endl;
                else
                cout<<"-1\n";
            }
        }
    }
	// your code goes here
	return 0;
}