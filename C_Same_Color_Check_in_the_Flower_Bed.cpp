#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,q;cin>>n>>q;
	vector<int> a(n),b(n);
	for(int& i:a) cin>>i;
	for(int i=1; i<n; i++) b[i]=b[i-1]+(a[i]==a[i-1]);
	while(q--){
	    int l,r;cin>>l>>r;
	    int ans=b[r-1];
	    if(l-1>=0) ans-=b[l-1];
	    cout<<ans<<'\n';
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