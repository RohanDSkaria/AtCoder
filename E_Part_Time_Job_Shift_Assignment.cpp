#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n),mp(m);
    vector<int> f(m),t(n);
    for(int i=0; i<n; i++){
        int k;cin>>k;
        a[i]=vector<int>(k);
        for(int j=0; j<k; j++){
            cin>>a[i][j];
            f[a[i][j]-1]++;
            mp[a[i][j]-1].push_back(i);
        }
    }
    vector<pair<int,int>> b;
    for(int i=0; i<m; i++){
        if(f[i]) b.push_back({f[i],i});
    }
    sort(b.begin(),b.end());
    for(auto &[y,x]:b){
        if(t[x]) continue;
        for(int i:mp[x]){
            if(t[i]) continue;
            t[i]=1;
            break;
        }
    }
    cout<<accumulate(t.begin(),t.end(),0ll)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/