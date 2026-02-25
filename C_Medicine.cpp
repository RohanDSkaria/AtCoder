#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
	vector<vector<int>> a(n,vector<int>(2));
	for(auto& i:a) cin>>i[0]>>i[1];
	sort(a.begin(),a.end());
	int sum=0;
	for(auto& i:a) sum+=i[1];
	if(sum<=k){
	    cout<<"1\n";
	    return;
	}
	for(int i=0; i<n; i++){
	    sum-=a[i][1];
	    if(sum>k) continue;
	    cout<<a[i][0]+1<<'\n';
	    return;
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