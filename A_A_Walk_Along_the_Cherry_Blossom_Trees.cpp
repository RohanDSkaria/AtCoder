#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,s,t;cin>>n>>m>>s>>t;
    vector<pair<int,int>> a(m);
    for(auto& [x,y]:a) cin>>x>>y;
    if(s>t) swap(s,t);
    sort(a.begin(),a.end());
    int ans=0;
    for(auto [x,y]:a){
        if(x>=s && x<=t) ans+=y;
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