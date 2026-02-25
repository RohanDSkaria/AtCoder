#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
	vector<int> a(n);
	for(int& i:a) cin>>i;
	sort(a.begin(),a.end());
	int ans=a[n-1-k]-a[0];
	for(int i=0; i<k; i++) ans=min(ans,a[n-k+i]-a[i+1]);
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