#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<string> a(n);
    for(auto& i:a) cin>>i;
    int ans=0;
    vector<int> c(n*m+1),col(m+1),pre(m+1);
    for(int r1=0; r1<n; r1++){
        col=vector<int>(m+1);
        for(int r2=r1; r2<n; r2++){
            for(int j=1; j<=m; j++){
                col[j]+=a[r2][j-1]-'0';
                pre[j]=pre[j-1]+col[j];
            }
            for(int j=0; j<=m; j++){
                if(pre[j]-k>=0) ans+=c[pre[j]-k];
                c[pre[j]]++;
            }
            for(int j=0; j<=m; j++) c[pre[j]]--;
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