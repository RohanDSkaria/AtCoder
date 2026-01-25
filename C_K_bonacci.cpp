#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    const int mod=1e9;
    vector<int> a(n+1,1);
    if(k<=n) a[k]=k;
    for(int i=k+1; i<=n; i++) a[i]=(2*a[i-1]-a[i-k-1]+mod)%mod;
    cout<<a[n]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/