#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> b(n-1);
    for(int &i:b) cin>>i;
    int ans=b[0]+b[n-2];
    for(int i=n-2; i>0; i--) ans+=min(b[i],b[i-1]);
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