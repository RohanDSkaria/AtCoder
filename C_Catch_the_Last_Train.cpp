#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int g,m,d,k,v;cin>>g>>m>>d>>k>>v;
    int dis=k*d;
    if(dis>=g) cout<<(g*v<=(__int128_t)d*(m-g)?"Yes\n":"No\n");
    else cout<<((k+g-dis)*v<=(m-g)?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/