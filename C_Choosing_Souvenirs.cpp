#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,l,r,t;cin>>n>>l>>r>>t;
    int a,b;cin>>a>>b;
	int ans=-1;
	pair<int,int> p={1e9,-1e9};
	if(a>=l && a<=r && b>=t){
	    ans=1;
	    p={a,b};
	}
	for(int i=1; i<n; i++){
	    cin>>a>>b;
	    if(a<l || a>r || b<t) continue;
	    if(a<p.first || (a==p.first && b>p.second)){
	        ans=i+1;
	        p={a,b};
	    }
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