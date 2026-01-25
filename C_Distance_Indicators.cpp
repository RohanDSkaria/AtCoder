#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	map<int,int> m;
	int ans=0;
	for(int j=1,x; j<=n; j++){
	    cin>>x;
	    ans+=m[j-x];
	    m[x+j]++;
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