#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k,x;cin>>n>>k>>x;
	vector<string> a(n);
	for(auto &i:a) cin>>i;
	vector<string> b;
    function<void(int, string)> fn=[&](int i, string t){
        if(i==k){
            b.push_back(t);
            return;
        }
        for(auto s:a) fn(i+1,t+s);
    };
    fn(0,"");
	sort(b.begin(),b.end());
	cout<<b[x-1]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}