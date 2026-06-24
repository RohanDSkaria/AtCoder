#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	map<int,vector<int>> mp;
	for(int i=0,k,j; i<m; i++){
	    cin>>k;
	    while(k--){
	        cin>>j;
	        mp[j].push_back(i);
	    }
	}
	vector<int> b(n),vis(m);
	for(int& i:b) cin>>i;
	for(int i=n-1,c=m; i>=0; i--){
        vector<int>& t=mp[b[i]];
        b[i]=c;
	    for(int j:t){
            if(vis[j]) continue;
	        vis[j]=1;
	        c--;
	    }
	}
	for(int i:b) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/