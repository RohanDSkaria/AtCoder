#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
	vector<int> a(4);
	for(int& i:a) cin>>i;
	reverse(a.begin(),a.end());
	for(int i=0; i<s.size(); i++){
	    if(i==a.back()){
	        cout<<'"';
	        a.pop_back();
	    }
	    cout<<s[i];
	}
    if(a.size()) cout<<'"';
	cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/