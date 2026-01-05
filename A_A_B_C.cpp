#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	int ans=0;
	for(int i=1; i<=n; i++){
	    for(int j=1; i*j<=n; j++) ans+=n/i/j;
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