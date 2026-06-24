#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<vector<int>> a(n);
    vector<int> deg(n),vis(n);
	while(m--){
	    int u,v;cin>>u>>v;
	    a[u-1].push_back(v-1);
	    a[v-1].push_back(u-1);
        deg[u-1]++;
        deg[v-1]++;
	}
    if(count(deg.begin(),deg.end(),2ll)!=n){
        cout<<"No\n";
        return;
    }
    auto dfs=[&](auto&& fn, int v, int p){
        if(vis[v]) return;
        vis[v]=1;
        for(int u:a[v]){
            if(u==p) continue;
            fn(fn,u,v);
        }
    };
    dfs(dfs,0,-1);
    cout<<(count(vis.begin(),vis.end(),1ll)==n?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/