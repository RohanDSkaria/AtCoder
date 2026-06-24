#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> r(n),c(n);
	for(int& i:r) cin>>i;
	for(int& i:c) cin>>i;
	int q;cin>>q;
	while(q--){
	    int x,y;cin>>x>>y;
	    cout<<"#."[c[y-1]<=n-r[x-1]];
	}
	cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/