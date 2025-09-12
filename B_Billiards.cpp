#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	double a,b,c,d;cin>>a>>b>>c>>d;
	cout<<fixed<<setprecision(6)<<(a*d+b*c)/(b+d)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/