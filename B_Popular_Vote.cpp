#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	int k=0;
	vector<int> a(n);
	for(int &i:a){
	    cin>>i;
	    k+=i;
	}
    k=(k+4*m-1)/(4*m);
	sort(a.rbegin(),a.rend());
	for(int i=0; i<m; i++){
	    if(a[i]<k){
	        cout<<"No\n";
	        return;
	    }
	}
	cout<<"Yes\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}