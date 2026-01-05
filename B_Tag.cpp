#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,v,b,w,t;cin>>a>>v>>b>>w>>t;
    cout<<(abs(b-a)>(v-w)*t?"NO\n":"YES\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/