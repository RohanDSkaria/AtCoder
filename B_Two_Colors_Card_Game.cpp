#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	string s;
	map<string,int> m;
	while(n--){
	    cin>>s;
	    m[s]++;
	}
	cin>>n;
	while(n--){
	    cin>>s;
	    m[s]--;
	}
	int ans=0;
	for(auto& [x,y]:m) ans=max(ans,y);
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