#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n);
    while(m--){
        int u,v;cin>>u>>v;
        a[u-1].push_back(v-1);
        a[v-1].push_back(u-1);
    }
    vector<int> vis(n);
    int ans=0;
    auto dfs=[&](auto&& fn, int u, int p)-> void {
        vis[u]=1;
        for(int v:a[u]){
            if(v==p) continue;
            if(vis[v]) ans++;
            else fn(fn,v,u);
        }
    };
    for(int i=0; i<n; i++){
        if(vis[i]) continue;
        dfs(dfs,i,-1);
    }
    cout<<ans/2<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/