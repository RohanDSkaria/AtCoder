#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<int> a(n);
	for(int& i:a) cin>>i;
	sort(a.begin(),a.end());
	int ans=0;
	for(int l=0,r=0; r<n; r++){
	    while(a[r]-a[l]>=m) l++;
	    ans=max(ans,r-l+1);
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