#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(3*n);
	for(int i:a){
		cin>>i;
		if(++a[i]==2) cout<<i<<' ';
	}
	cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/