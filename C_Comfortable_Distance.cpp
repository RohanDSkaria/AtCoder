#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,l,r;cin>>n>>l>>r;
    map<char,vector<int>> m;
    for(int i=0; i<n; i++){
        char c;cin>>c;
        m[c].push_back(i);
    }
    int ans=0;
    auto fn=[&](char c, int x){
        vector<int>& a=m[c];
        int k=a.size(),cnt=0;
        for(int i=0,j=0; i<k; i++){
            while(j<k && a[j]-a[i]<=x) j++;
            cnt+=j-i-1;
        }
        return cnt;
    };
    for(auto& [c,y]:m) ans+=fn(c,r)-fn(c,l-1);
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