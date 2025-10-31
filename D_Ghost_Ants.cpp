#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,t;cin>>n>>t;
    string s;cin>>s;
    vector<int> l,r;
    for(int i=0,x; i<n; i++){
        cin>>x;
        if(s[i]=='1') r.push_back(x);
        else l.push_back(x);
    }
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    int m=l.size(),ans=0;
    int st=0,e=0;
    for(int i:r){
        int k=i+2*t;
        while(st<m && l[st]<i) st++;
        while(e<m && l[e]<=k) e++;
        ans+=e-st;
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