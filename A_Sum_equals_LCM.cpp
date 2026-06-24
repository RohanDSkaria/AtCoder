#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
    int c=0;
	for(int i=2; i*i<=n; i++){
	    if(n%i) continue;
	    c++;
        while(n%i==0) n/=i;
	}
	cout<<(c+(n>1)>1?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/