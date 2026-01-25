#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
	int ans=0,n=s.size(),t=0;
	for(int i=n-1; i>=0; i--){
	    s[i]=((((s[i]-'0'-t)%10)+10)%10)+'0';
	    ans+=s[i]-'0'+1;
	    t+=s[i]-'0';
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