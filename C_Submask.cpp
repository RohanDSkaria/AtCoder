#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a;
	for(int i=0; i<61; i++){
	    if((n>>i)&1) a.push_back(i);
	}
	n=1<<a.size();
	for(int m=0,k=a.size(); m<n; m++){
	    int v=0;
	    for(int j=0; j<k; j++){
	        if((m>>j)&1) v|=1ll<<a[j];
	    }
	    cout<<v<<'\n';
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