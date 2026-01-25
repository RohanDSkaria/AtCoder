#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	map<int,int> m;
	for(int i=1,x; i<=n; i++){
		cin>>x;
		m[x]=i;
	}
	int k=-1;
	while(n--) cout<<(k=m[k])<<" \n"[!n];
}
int32_t main(){
	ios::sync_with_stdio(0);cin.tie(nullptr);
	int t=1;
	// cin>>t;
	while(t--) solve();
}
/*

*/