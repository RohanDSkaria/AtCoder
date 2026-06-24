#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int l=0,r=n-1;
    while(l<n && a[l]) l++;
    while(r>=0 && a[r]) r--;
    l=min(l,k);
    r=max(r+1,k);
    int ans=r-l;
    for(int i=l; i<r; i++) ans+=a[i];
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