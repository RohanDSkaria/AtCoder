#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(2*n);
	for(auto& i:a) cin>>i;
	struct cmp{
        bool operator()(pair<int,int> a,pair<int,int> b) const{
            if(a.first!=b.first) return a.first<b.first;
            return a.second>b.second;
        }
    };
    map<char,char> mp{
        {'G','P'},
        {'P','C'},
        {'C','G'}
    };
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq,qp;
    for(int i=2*n-1; i>=0; i--) pq.push({0,i});
    for(int j=0; j<m; j++){
        qp=priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>();
        while(!pq.empty()){
            auto f=pq.top();
            pq.pop();
            auto s=pq.top();
            pq.pop();
            char fv=a[f.second][j],sv=a[s.second][j];
            if(mp[fv]==sv) s.first++;
            else if(fv!=sv) f.first++;
            qp.push(f);
            qp.push(s);
        }
        pq=qp;
    }
    while(!pq.empty()){
        auto t=pq.top();
        cout<<t.second+1<<'\n';
        pq.pop();
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