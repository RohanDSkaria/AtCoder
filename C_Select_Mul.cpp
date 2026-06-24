#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
    sort(s.rbegin(),s.rend());
    int n=s.size(),ans=0;
    for(int m=(1<<n)-2; m; m--){
        string a,b;
        for(int i=0; i<n; i++) ((m>>i)&1?a:b)+=s[i];
        ans=max(ans,stoll(a)*stoll(b));
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