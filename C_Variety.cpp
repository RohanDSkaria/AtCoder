#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k,m;cin>>n>>k>>m;
    map<int,vector<int>> mp;
	for(int i=0; i<n; i++){
	    int x,y;cin>>x>>y;
	    mp[x].push_back(y);
	}
    vector<int> a,b;
    for(auto& [x,y]:mp){
        sort(y.rbegin(),y.rend());
        a.push_back(y[0]);
        for(int i=y.size()-1; i; i--) b.push_back(y[i]);
    }
    sort(a.rbegin(),a.rend());
    int ans=0;
    for(int i=0; i<m; i++) ans+=a[i];
    for(int i=a.size()-1; i>=m; i--) b.push_back(a[i]);
    sort(b.rbegin(),b.rend());
    for(int i=0; i<k-m; i++) ans+=b[i];
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