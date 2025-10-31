#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<string> a(n);
	int M=0;
	for(auto &i:a){
	    cin>>i;
	    M=max(M,(int)i.size());
	}
	vector<string> ans(M);
	for(int i=n-1; i>=0; i--){
	    int m=a[i].size();
	    for(int j=0; j<M; j++) ans[j]+=j<m?a[i][j]:'*';
	}
	for(auto &i:ans){
	    while(i.back()=='*') i.pop_back();
	    cout<<i<<'\n';
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