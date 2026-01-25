#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
	int ans=1,n=s.size();
	bool ya=1;
    char p=s[0];
	for(int i=1; i<n; i++){
        bool k=0;
	    if(s[i]==p){
            cout<<i<<'\n';
	        if(ya){
                k=1;
                i++;
            }
	        ya^=1;
	    }
        else ya=1;
	    ans++;
        p=s[i-k];
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