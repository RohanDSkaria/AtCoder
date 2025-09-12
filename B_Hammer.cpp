#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int x,y,z;cin>>x>>y>>z;
    if(y<0){z=-z;x=-x;y=-y;}
    if(x<y) cout<<abs(x)<<'\n';
    else if(z>y) cout<<"-1\n";
    else cout<<abs(z)+abs(z-x)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}