#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
	vector<vector<int>> a(n,vector<int>(n));
	for(auto& i:a){
	    for(int& j:i) cin>>j;
	}
	vector<int> t(n-1);
	iota(t.begin(),t.end(),1);
	int ans=0;
	do{
	    int c=0,p=0;
	    for(int i:t){
	        c+=a[p][i];
	        p=i;
	    }
	    ans+=c+a[p][0]==k;
	}
	while(next_permutation(t.begin(),t.end()));
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