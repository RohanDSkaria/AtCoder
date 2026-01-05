#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
	vector<int> a(6);
	for(char c:s) a[c-'A']++;
	for(int i=0; i<6; i++){
        cout<<a[i];
        if(i<5) cout<<' ';
    }
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