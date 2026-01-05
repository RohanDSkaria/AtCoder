#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
    string ans;
    for(int i=1; i*i*i<=n; i++){
        string s=to_string(i*i*i);
        if(s==string(s.rbegin(),s.rend())) ans=s;
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