#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<pair<int,int>> a(n);
	map<int,int> m;
	for(auto& [h,l]:a){
	    cin>>h>>l;
	    m[h]++;
	}
    int mx=m.rbegin()->first;
    vector<int> M(n);
    for(int i=0; i<n-1; i++){
        if(--m[a[i].first]==0) m.erase(a[i].first);
        M[i]=m.rbegin()->first;
    }
	int q;cin>>q;
	while(q--){
	    int t;cin>>t;
	    int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            a[mid].second<=t?s=mid+1:e=mid-1;
        }
        cout<<(e==-1?mx:M[e])<<'\n';
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