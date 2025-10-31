#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    auto fn=[&](int i, int j){
        int v=0;
        for(int k=0; k<m; k++){
            int t=a[i][k]-a[j][k];
            v+=t*t;
        }
        return v;
    };
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int k=fn(i,j);
            int kk=sqrt(k);
            ans+=kk*kk==k;
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
