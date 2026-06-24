#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> s(n),a(n);
    vector<pair<int,int>> t(n);
    for(int& i:s) cin>>i;
    for(int i=0; i<n; i++){
        cin>>t[i].first;
        t[i].second=i;
    }
    sort(t.begin(),t.end());
    int c=t[0].first;
    for(int i=0; i<n; i++){
        a[t[i].second]=c;
        c=min(c+s[t[i].second],t[(i+1)%n].first);
    }
    for(int i:a) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/