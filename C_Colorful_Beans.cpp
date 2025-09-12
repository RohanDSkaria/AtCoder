#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	map<int,int> m;
	while(n--){
	    int a,b;cin>>a>>b;
        m[b]=m.count(b)?min(m[b],a):a;
	}
	int ans=0;
	for(auto &[x,y]:m) ans=max(ans,y);
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