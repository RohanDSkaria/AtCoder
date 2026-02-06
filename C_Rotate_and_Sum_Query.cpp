#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,q;cin>>n>>q;
	vector<int> a(n);
	for(int& i:a) cin>>i;
	for(int i=1; i<n; i++) a[i]+=a[i-1];
	int t=0;
	while(q--){
	    int x,l,r;cin>>x>>l;
	    if(x==1) t+=l;
	    else{
	        cin>>r;
	        l=(l+t-1+n)%n;
	        r=(r+t-1+n)%n;
	        int ans=0;
	        if(l<=r){
	            ans=a[r];
	            if(l) ans-=a[l-1];
	        }
	        else ans=a[n-1]-a[l-1]+a[r];
	        cout<<ans<<'\n';
	    }
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