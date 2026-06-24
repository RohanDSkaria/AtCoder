#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
    int mnx=1e18,mxx=-1e18,mny=mnx,mxy=mxx;
    while(n--){
        int x,y;cin>>x>>y;
        mnx=min(mnx,x);
        mxx=max(mxx,x);
        mny=min(mny,y);
        mxy=max(mxy,y);
    }
    cout<<(max(mxx-mnx,mxy-mny)+1)/2<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/