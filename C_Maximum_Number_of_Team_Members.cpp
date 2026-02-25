#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n),t(n);
    for(int& i:a) cin>>i;
    for(int i=0; i<64; i++){
        if((k>>i)&1){
            bool ya=0;
            for(int j:a) ya|=(j>>i)&1;
            if(ya) continue;
            cout<<"-1\n";
            return;
        }
        for(int j=0; j<n; j++){
            if((a[j]>>i)&1) t[j]=1;
        }
    }
    int ans=n;
    for(int i:t) ans-=i;
    cout<<(ans?ans:-1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/