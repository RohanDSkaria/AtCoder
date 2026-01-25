#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(n);
	for(auto& i:a) cin>>i;
    int ans=n;
    for(int k=(1<<n)-1; k>=0; k--){
        string t(m,'x');
        for(int i=0; i<n; i++){
            if((k>>i)&1){
                for(int j=0; j<m; j++) if(a[i][j]=='o') t[j]='o';
            }
        }
        if(!count(t.begin(),t.end(),'x')) ans=min(ans,(int)__builtin_popcountll(k));
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