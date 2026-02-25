#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vector<int> c(n);
    for(int& i:c) cin>>i;
    map<int,vector<int>> mp;
    for(int i=0; i<n; i++) mp[c[i]].push_back(i);
    for(auto& [x,y]:mp) reverse(y.begin(),y.end()-1);
    for(int i=0; i<n; i++){
        cout<<s[mp[c[i]].back()];
        mp[c[i]].pop_back();
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/