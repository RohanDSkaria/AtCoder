#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	string s;cin>>s;
    s+='0';
    int ans=0,a=0,b=0;
    for(int i=0; i<=n; i++){
        if(s[i]=='0'){
            ans=max({ans,a,a+b-m});
            a=0;b=0;
        }
        else if(s[i]=='2') a++;
        else b++;
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