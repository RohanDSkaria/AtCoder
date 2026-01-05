#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m,k;cin>>n>>m>>k;
	vector<string> a(n,string(m,'.'));
	int x=0,y=0,dir=0;
	vector<int> dx={-1,0,1,0},dy={0,1,0,-1};
	while(k--){
	    char &c=a[x][y];
	    if(c=='.'){
	        c='#';
	        dir=(dir+1)%4;
	    }
	    else{
	        c='.';
	        dir=(dir+3)%4;
	    }
	    x=(x+dx[dir]+n)%n;
	    y=(y+dy[dir]+m)%m;
	}
	for(auto &i:a) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/