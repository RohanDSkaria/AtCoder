#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(n),b(m);
	for(auto &i:a) cin>>i;
	for(auto &i:b) cin>>i;
	for(int i=0; i+m<=n; i++){
	    for(int j=0; j+m<=n; j++){
	        bool ya=1;
	        for(int ii=0; ii<m && ya; ii++){
	            for(int jj=0; jj<m && ya; jj++){
	                ya&=b[ii][jj]==a[i+ii][j+jj];
	            }
	        }
	        if(ya){
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