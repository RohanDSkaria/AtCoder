#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,v;cin>>n>>v;
	vector<int> d(n-1),t(n-1),ans;
	for(int& i:d) cin>>i;
	for(int& i:t) cin>>i;
    d.push_back(0);
	for(int i=0; i<n-1; i++){
        double k=t[i];
        k*=v;
	    if(d[i]<k) ans.push_back(i+2);
	    d[i+1]+=d[i];
	}
	if(ans.size()==0){
	    cout<<"-1\n";
	    return;
	}
	for(int i:ans) cout<<i<<' ';
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