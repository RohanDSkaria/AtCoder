#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(n);
	for(int& i:a) cin>>i;
	int ans=0;
    for(int m=0; m<(1<<n); m++){
        int c=0;
        double x=0.5,t;
        for(int i=0; i<n; i++){
            t=x+((m>>i)&1?a[i]:-a[i]);
            if((x>0)^(t>0)) c++;
            x=t;
        }
        ans=max(ans,c);
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