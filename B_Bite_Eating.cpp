#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,l;cin>>n>>l;
    int r=n+l-1,k=0;
    if(r<0) k=r;
    else if(l>0) k=l;
    cout<<(r+l)*(r+1-l)/2-k<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/