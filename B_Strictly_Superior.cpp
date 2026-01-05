#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
	int n,m;cin>>n>>m;
	vector<int> p(n);
	vector<bitset<100>> a(n);
	for(int i=0,x; i<n; i++){
	    cin>>p[i]>>x;
	    while(x--){
	        int y;cin>>y;
	        a[i][y-1]=1;
	    }
	}
	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++){
	        if(p[i]>=p[j] && (a[i]&a[j])==a[i] && (p[i]>p[j] || a[i]!=a[j])) return 1;
	    }
	}
    return 0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/