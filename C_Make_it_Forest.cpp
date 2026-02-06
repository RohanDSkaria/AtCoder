#include <bits/stdc++.h>
using namespace std;
#define int long long
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<p.first<<' '<<p.second;}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, vector<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, vector<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, vector<vector<T>>& v){os<<'\n';for(auto&i:v)os<<i<<'\n';return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<'\n';for(auto&[k,v]:m)os<<k<<" -> "<<v<<'\n';return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<'\n';if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
	int n,m;cin>>n>>m;
	vector<set<int>> adj(n);
	while(m--){
	    int u,v;cin>>u>>v;
	    u--;v--;
	    adj[u].insert(v);
	    adj[v].insert(u);
	}
	set<int> vis;
	int ans=0,ya;
	function<void(int,int)> dfs=[&](int k, int p){
        if(!ya) return;
        // deb(k,p)
        cout<<'\n';
	    if(vis.count(k)){
            if(ya){
                ans++;
                // cout<<"pairs: ";
                // cout<<p+1<<' '<<k+1<<'\n';
                adj[p].erase(k);
                adj[k].erase(p);
            }
            ya=0;
	        return;
	    }
	    vis.insert(k);
	    for(int i:adj[k]){
            if(i!=p) dfs(i,k);
            if(!ya) return;
        }
	};
	for(int i=0; i<n; i++){
        vis = set<int>{};
        // for(int j=0; j<n; j++){
        //     cout<<j<<": ";
        //     for(int k:adj[j]) cout<<k<<' ';
        //     cout<<'\n';
        // }
        // cout<<"vis\n";
        // for(int i=0; i<n; i++) cout<<i+1<<": "<<vis[i]<<'\n';
        // cout<<'\n';
        ya=1;
	    dfs(i,-1);
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