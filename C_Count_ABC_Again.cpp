#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,q;cin>>n>>q;
	string s;cin>>s;
	int ans=0;
	for(int i=0; i<n; i++) ans+=s.substr(i,3)=="ABC";
	while(q--){
	    int x;cin>>x;
	    char c;cin>>c;
	    x--;
	    for(int i=max(0ll,x-2); i<=x; i++) ans-=s.substr(i,3)=="ABC";
	    s[x]=c;
	    for(int i=max(0ll,x-2); i<=x; i++) ans+=s.substr(i,3)=="ABC";
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