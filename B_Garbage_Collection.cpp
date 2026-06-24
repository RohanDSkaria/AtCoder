#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<pair<int,int>> a(n);
	for(auto& [x,y]:a) cin>>x>>y;
	int q;cin>>q;
	while(q--){
	    int t,d;cin>>t>>d;
	    auto [x,y]=a[t-1];
        cout<<d+(((y-d)%x+x)%x)<<'\n';
	}
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/