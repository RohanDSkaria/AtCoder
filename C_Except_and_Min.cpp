#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,q;cin>>n>>q;
    vector<int> a(n);
	map<int,int> m;
    for(int& i:a){
        cin>>i;
        m[i]++;
    }
    while(q--){
        int k;cin>>k;
        vector<int> t(k);
        for(int& i:t){
            cin>>i;
            if(--m[i=a[i-1]]==0) m.erase(i);
        }
        cout<<m.begin()->first<<'\n';
        for(int i:t) m[i]++;
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/