#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
	s+=s.back();
	int n=s.size(),ans=0;
	for(int l=0,r=1; r<n; r++){
	    if(s[r]!=s[r-1]) continue;
	    int k=r-l;
	    ans+=k*(k+1)/2;
	    l=r;
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