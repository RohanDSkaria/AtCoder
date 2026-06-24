#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(n),b(n);
	vector<pair<int,int>> ans;
	for(int i=0; i<n; i++){
	    cin>>a[i];
	    b[--a[i]]=i;
	}
	for(int i=n-1; i; i--){
        int p=b[i];
	    if(p==i) continue;
	    ans.push_back({p+1,i+1});
	    b[a[i]]=p;
        a[p]=a[i];
	}
	cout<<ans.size()<<'\n';
	for(auto& [x,y]:ans) cout<<x<<' '<<y<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
x*(2n+x-1) >= 2k
*/