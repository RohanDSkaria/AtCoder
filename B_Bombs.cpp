#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(n);
	for(auto &i:a) cin>>i;
	auto destory=[&](int x, int y, int v){
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            if(abs(x-i)+abs(y-j)>v || a[i][j]!='#') continue;
	            a[i][j]='.';
	        }
	    }
	};
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        if(a[i][j]=='.' || a[i][j]=='#') continue;
	        destory(i,j,a[i][j]-'0');
	    }
	}
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        if(a[i][j]!='#') a[i][j]='.';
	        cout<<a[i][j];
	    }
	    cout<<'\n';
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