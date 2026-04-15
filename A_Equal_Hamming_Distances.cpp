#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	string s,t;cin>>s>>t;
	int a=0,b=0;
	for(int i=0; i<n; i++){
	    if(s[i]==t[i]) continue;
	    s[i]=='1'?a++:b++;
	}
    if((b-a)&1){
        cout<<"-1\n";
        return;
    }
    if(b<a) swap(s,t);
    int k=abs(b-a)/2;
    string ans(n,'0');
    for(int i=n-1; i>=0 && k; i--){
        if(s[i]>=t[i]) continue;
        k--;
        ans[i]='1';
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