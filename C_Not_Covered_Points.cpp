#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        int x,y;cin>>x>>y;
        a[x-1]=y;
    }
    int ans=0,mn=1e9;
    for(int x=0; x<n; x++){
        if(a[x]>=mn) continue;
        ans++;
        mn=a[x];
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