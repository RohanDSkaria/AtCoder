#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	string s;cin>>s;
	s+='_';
	vector<int> f(26);
	for(int i=1,t=1; i<=n; i++){
	    if(s[i]==s[i-1]) t++;
	    else{
	        f[s[i-1]-'a']=max(f[s[i-1]-'a'],t);
	        t=1;
	    }
	}
    cout<<accumulate(f.begin(),f.end(),0ll)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/