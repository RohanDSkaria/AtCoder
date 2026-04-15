#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(n);
	for(int& i:a) cin>>i;
	int i=0,j=n-1,l=a[i],r=a[j];
	while(j-i>1) l<r?l+=a[++i]:r+=a[--j];
	cout<<abs(l-r)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/w