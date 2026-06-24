#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<vector<int>> a(n);
	for(int i=0; i<n; i++){
	    int k,x;cin>>k;
	    while(k--){
	        cin>>x;
	        a[x-1].push_back(i+1);
	    }
	}
	for(int i=0; i<n; i++){
        cout<<a[i].size()<<' ';
	    for(int j:a[i]) cout<<j<<' ';
	    cout<<'\n';
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