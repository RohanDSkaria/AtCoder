#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,q;cin>>n>>q;
    vector<int> v(n),p(n);
    for(int& i:v) cin>>i;
    for(int i=1; i<n; i++) cin>>p[i];
    for(int i=1; i<n; i++) v[i]+=v[p[i]-1];
    while(q--){
        int x;cin>>x;
        cout<<v[x-1]<<'\n';
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