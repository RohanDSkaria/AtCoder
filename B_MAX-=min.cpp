#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,g=0;cin>>n;
    while(cin>>n) g=__gcd(g,n);
    cout<<g<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/