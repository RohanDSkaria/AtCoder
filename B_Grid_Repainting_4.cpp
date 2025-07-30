#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(n);
	for(auto &i:a) cin>>i;
	const vector<int> dx={-1,1,0,0},dy={0,0,-1,1};
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        if(a[i][j]!='.') continue;
	        vector<bool> t(6);
	        for(int d=0; d<4; d++){
	            int x=i+dx[d],y=j+dy[d];
	            if(x>=0 && x<n && y>=0 && y<m && a[x][y]!='.') t[a[x][y]-'0']=1;
	        }
	        for(int k=1; k<6; k++){
	            if(t[k]) continue;
	            a[i][j]=k+'0';
	        }
	    }
	}
	for(auto &i:a) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}