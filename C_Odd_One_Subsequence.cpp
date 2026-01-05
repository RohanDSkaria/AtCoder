#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,ans=0;cin>>n;
	map<int,int> m;
	for(int i=0,x; i<n; i++){
	    cin>>x;
	    m[x]++;
	}
	for(auto &[x,y]:m) ans+=(y*(y-1)/2)*(n-y);
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