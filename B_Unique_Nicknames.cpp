#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	map<string,int> m;
	vector<pair<string,string>> a(n);
	for(auto& [s,t]:a){
	    cin>>s>>t;
        m[s]++;
        if(s!=t) m[t]++;
	}
	for(auto& [s,t]:a){
	    if(m[s]>1 && m[t]>1){
	        cout<<"No\n";
	        return;
	    }
	}
	cout<<"Yes\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/