#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
	vector<int> r;
	for(int i=1; i<16; i++) r.push_back(stoll(string(i,'1')));
	set<int> s;
	for(int i=0; i<15; i++){
	    for(int j=0; j<15; j++){
	        for(int k=0; k<15; k++) s.insert(r[i]+r[j]+r[k]);
	    }
	}
	auto it=s.begin();
	while(--n) it++;
	cout<<*it<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/