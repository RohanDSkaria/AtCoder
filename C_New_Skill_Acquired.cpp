#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
    vector<vector<int>> a(n);
    vector<int> t,vis(n);
    for(int i=0; i<n; i++){
        int u,v;cin>>u>>v;
        if(u==0){
            t.push_back(i);
            continue;
        }
        a[u-1].push_back(i);
        a[v-1].push_back(i);
    }
    auto dfs=[&](auto&& fn, int u, int p)-> void {
        vis[u]=1;
        for(int v:a[u]){
            if(v==p || vis[v]) continue;
            fn(fn,v,u);
        }
    };
    for(int u:t){
        if(vis[u]) continue;
        dfs(dfs,u,-1);
    }
    cout<<accumulate(vis.begin(),vis.end(),0ll)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/