#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,l,w;cin>>n>>l>>w;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    a.push_back(l);
    int ans=(a[0]+w-1)/w;
    for(int i=1; i<=n; i++){
        if(a[i-1]+w<a[i]) ans+=(a[i]-a[i-1]-1)/w;
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/