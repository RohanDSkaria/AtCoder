#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    char c1,c2;cin>>c1>>c2;
    vector<string> a(n),ans(n*k,string(m*k,' '));
    for(auto& i:a) cin>>i;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int x=0; x<k; x++){
                for(int y=0; y<k; y++){
                    ans[k*i+x][k*j+y]=a[i][j]=='#'?c1:c2;
                }
            }
        }
    }
    for(auto &i:ans) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/