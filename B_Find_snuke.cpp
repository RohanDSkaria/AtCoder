#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(n);
	for(auto& i:a) cin>>i;
	int dx[8]={-1,-1,0,1,1,1,0,-1};
	int dy[8]={0,1,1,1,0,-1,-1,-1};
    string s="snuke";
	for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]!='s') continue;
	        for(int d=0; d<8; d++){
                vector<pair<int,int>> t;
                int ti=i,tj=j;
                for(int k=0; k<5; k++){
                    if(ti>=0 && ti<n && tj>=0 && tj<m && a[ti][tj]==s[k]) t.push_back({ti+1,tj+1});
                    else break;
                    ti+=dx[d];
                    tj+=dy[d];
                }
                if(t.size()==5){
                    for(auto& [x,y]:t) cout<<x<<' '<<y<<'\n';
                    return;
                }
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