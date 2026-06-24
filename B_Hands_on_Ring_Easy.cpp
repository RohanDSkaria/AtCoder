#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,q;cin>>n>>q;
	int ans=0,ll=1,rr=2;
	while(q--){
        char h;cin>>h;
        int t;cin>>t;
        int *lp=&ll,*rp=&rr;
        if(h=='R') swap(lp,rp);
        int l=*lp,r=*rp;
        if(l<r){
            if(t>r) ans+=l+n-t;
            else if(l<t && t<r) ans+=t-l;
            else ans+=l-t;
        }
        else{
            if(r<t && t<l) ans+=l-t;
            else{
                if(t<l) ans+=n-l+t;
                else ans+=t-l;
            }
        }
        *lp=t;
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