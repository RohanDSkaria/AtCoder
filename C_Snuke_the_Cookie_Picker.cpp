#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(n);
	for(auto &i:a) cin>>i;
	int l=n,t=n,b=0,r=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='.') continue;
            t=min(t,i);
            l=min(l,j);
            r=max(r,j);
            b=i;
        }
    }
    for(int i=t; i<=b; i++){
        for(int j=l; j<=r; j++){
            if(a[i][j]=='.'){
                cout<<i+1<<' '<<j+1<<'\n';
                return;
            }
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/