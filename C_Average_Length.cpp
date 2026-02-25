#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<pair<int,int>> a(n);
	for(auto& [x,y]:a) cin>>x>>y;
	vector<int> t(n);
	iota(t.begin(),t.end(),0);
	double ans=0;
	do{
	    for(int i=1; i<n; i++){
	        auto [x1,y1]=a[t[i]];
	        auto [x2,y2]=a[t[i-1]];
	        int dx=x2-x1,dy=y2-y1;
	        ans+=sqrt(dx*dx+dy*dy);
	    }
	}
	while(next_permutation(t.begin(),t.end()));
    for(int i=n-1; i>0; i--) n*=i;
	cout<<fixed<<setprecision(6)<<ans/n<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/