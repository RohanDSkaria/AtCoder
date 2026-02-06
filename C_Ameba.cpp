#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
    int m=2*n+1;
	vector<int> a(m);
    a[0]=1;
    for(int i=0,x; i<n; i++){
        cin>>x;
        a[i*2+1]=x*2;
        a[i*2+2]=x*2+1;
    }
    function<int(int,int)> dfs=[&](int c, int t){
        if(c>=m) return -1ll;
        if(a[c]==t) return 0ll;
        int l=dfs(2*c+1,t);
        if(l!=-1) return l+1;
        int r=dfs(2*c+2,t);
        if(r!=-1) return r+1;
        return -1ll;
    };
    for(int i=1; i<=m; i++) cout<<dfs(0,i)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/