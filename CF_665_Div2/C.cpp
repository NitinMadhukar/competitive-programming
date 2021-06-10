#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// int as=LLONG_MAX;
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main()
 {
     int t;cin>>t;
     while(t--){
       int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    bool f = true;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i >= 1)
        {
            if (a[i] < a[i - 1])
                f = false;
        }
        b[i] = a[i];
        mn = min(mn, a[i]);
    }
    if (f || mn == 1)
    {
        cout << "YES\n";
        // break;
    }
else{
    sort(b.begin(),b.end());
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            c.push_back(a[i]);
        }
    }
    int gcd;
    gcd = mn;
    for (int i = 0; i < c.size(); i++)
    {
        gcd = GCD(gcd, c[i]);
    }
    if (gcd == mn)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    }
     }
        return 0;
}
