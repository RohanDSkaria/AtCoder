#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,a,b,c,d;cin>>n;
	set<pair<int,int>> s;
	while(cin>>a>>b>>c>>d){
	    for(int i=a; i<b; i++){
	        for(int j=c; j<d; j++){
	            s.insert({i,j});
	        }
	    }
	}
	cout<<s.size()<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}