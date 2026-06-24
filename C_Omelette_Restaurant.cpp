#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,d;cin>>n>>d;
	vector<int> a(n),b(n);
	vector<pair<int,int>> q;
	for(int& i:a) cin>>i;
	for(int& i:b) cin>>i;
	int l=0,ans=0;
	for(int i=0; i<n; i++){
		q.push_back({i,a[i]});
		while(b[i]){
			int t=min(b[i],q[l].second);
			b[i]-=t;
			if(!(q[l].second-=t)) l++;
		}
		while(l<=i && q[l].first==i-d) l++;
	}
	for(int i=q.size()-1; i>=l; i--) ans+=q[i].second;
	cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/