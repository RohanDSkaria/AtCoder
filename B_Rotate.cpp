#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<string> a(n);
	for(auto &i:a) cin>>i;
    for(int i=1; i<n; i++) swap(a[i][0],a[i-1][0]);
    for(int j=1; j<n; j++) swap(a[n-1][j],a[n-1][j-1]);
    for(int i=n-2; i>=0; i--) swap(a[i][n-1],a[i+1][n-1]);
    for(int j=n-2; j>0; j--) swap(a[0][j],a[0][j+1]);
	for(auto &i:a) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}