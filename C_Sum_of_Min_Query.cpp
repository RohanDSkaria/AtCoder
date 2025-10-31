#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,q;cin>>n>>q;
    vector<int> a(n),b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    int sum=0;
    for(int i=0; i<n; i++) sum+=min(a[i],b[i]);
    while(q--){
        char c;cin>>c;
        int x,v;cin>>x>>v;
        x--;
        int t=min(a[x],b[x]);
        c=='A'?a[x]=v:b[x]=v;
        sum+=min(a[x],b[x])-t;
        cout<<sum<<'\n';
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