#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>m>>n;
    vector<pair<int,int>> a(n);
	vector<int> b(m);
    vector<string> s(m);
    for(int i=0,x; i<n; i++){
        cin>>x;
        a[i]={x,i};
    }
	int mx=0;
	for(int i=0; i<m; i++){
        cin>>s[i];
	    for(int j=0; j<n; j++){
	        if(s[i][j]=='o') b[i]+=a[j].first;
	    }
        b[i]+=i+1;
	    mx=max(mx,b[i]);
	}
    sort(a.rbegin(),a.rend());
	for(int i=0; i<m; i++){
	    int ans=0;
	    for(int j=0; j<n && b[i]<mx; j++){
            if(s[i][a[j].second]=='o') continue;
	        b[i]+=a[j].first;
            ans++;
	    }
	    cout<<ans<<'\n';
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