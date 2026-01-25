#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
    vector<int> f(n);
    for(int i:f){
        int x;cin>>x;
        f[x]++;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        k=min(k,f[i]);
        ans+=k;
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