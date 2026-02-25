#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k,m;cin>>n>>k>>m;
	vector<pair<int,int>> a(n);
	for(auto& [x,y]:a) cin>>y>>x;
	sort(a.rbegin(),a.rend());
	vector<int> e,b;
	for(auto [x,y]:a){
	    if(y){
	        if(e.size()<m) e.push_back(x);
	    }
	    else if(b.size()<k-m) b.push_back(x);
	}
	if(e.size()<m || b.size()<k-m){
	    cout<<"-1\n";
	    return;
	}
	cout<<accumulate(e.begin(),e.end(),0ll)+accumulate(b.begin(),b.end(),0ll)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/