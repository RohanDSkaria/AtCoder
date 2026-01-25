#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(n);
	for(int& i:a) cin>>i;
	sort(a.rbegin(),a.rend());
	int ans=0;
	for(int i=0,sg=1; i<n; i++){
        ans+=a[i]*a[i]*sg;
        sg*=-1;
    }
	cout<<fixed<<setprecision(6)<<acos(-1)*ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/