#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,d;cin>>n>>d;
	vector<pair<int,int>> a(n),st;
	for(auto& [x,y]:a) cin>>x>>y;
	vector<int> b(n);
	b[0]=1;
	st.push_back(a[0]);
	while(st.size()){
		auto [x,y]=st.back();
		st.pop_back();
		for(int i=0; i<n; i++){
			if(b[i]) continue;
			int dx=x-a[i].first,dy=y-a[i].second;
			if(dx*dx+dy*dy<=d*d){
				st.push_back(a[i]);
				b[i]=1;
			}
		}
	}
	for(int i:b) cout<<(i?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/