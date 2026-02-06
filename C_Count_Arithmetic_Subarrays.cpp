#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int ans=0;
    for(int l=0,r=0; l<n; l++){
        while(r+1<n && a[r+1]-a[r]==a[l+1]-a[l]) r++;
        ans+=r-l+1;
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