#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<vector<int>> cnt(n+1,vector<int>(n+1));
    while(m--){
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=1; i<n; i++) cnt[a[i-1]][a[i]]=1;
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            ans+=cnt[i][j]==0 && cnt[j][i]==0;
        }
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/