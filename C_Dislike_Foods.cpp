#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<set<int>> in(m);
    for(auto& s:in){
        int k,x;cin>>k;
        while(k--){
            cin>>x;
            s.insert(x);
        }
    }
    vector<int> b(n),ans(n);
    for(int& i:b) cin>>i;
    int k=m;
    set<int> t;
    for(int i=0; i<m; i++) t.insert(i);
    for(int i=n-1; i>=0; i--){
        ans[i]=k;
        set<int> tt;
        for(int j:t){
            if(in[j].count(b[i])) tt.insert(j);
        }
        k-=tt.size();
        for(int j:tt) t.erase(j);
    }
    for(int i:ans) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/