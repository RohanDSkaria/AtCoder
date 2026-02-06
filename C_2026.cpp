#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
    vector<int> m(n+1),ans;
	for(int x=1; x*x<=n; x++){
	    for(int y=x+1,k=x*x; k+y*y<=n; y++) m[k+y*y]++;
	}
    for(int i=1; i<=n; i++){
        if(m[i]==1) ans.push_back(i);
    }
	cout<<ans.size()<<'\n';
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