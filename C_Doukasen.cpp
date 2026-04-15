#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++) cin>>a[i]>>b[i];
    double t=0,ans=0;
    for(int i=0; i<n; i++) t+=a[i]*1./b[i];
    t/=2;
    for(int i=0; i<n; i++){
        ans+=min(a[i]*1.,t*b[i]);
        t-=min(a[i]*1./b[i],t);
    }
    cout<<fixed<<setprecision(5)<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/