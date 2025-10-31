#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int k;cin>>k;
    sort(s.begin(),s.end());
    for(int i=1; i<k; i++) next_permutation(s.begin(),s.end());
    cout<<s<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/