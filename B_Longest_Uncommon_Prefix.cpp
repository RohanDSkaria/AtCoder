#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	string s;cin>>s;
	for(int i=1; i<n; i++){
	    int ans=0;
	    for(int j=i; j<n; j++){
	        if(s[j]!=s[j-i]) ans=j-i+1;
	        else break;
	    }
	    cout<<ans<<'\n';
	}
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}