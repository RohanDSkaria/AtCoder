#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<vector<int>> a(n,vector<int>(3));
    for(auto &i:a) cin>>i[0]>>i[1]>>i[2];
    priority_queue<pair<int,int>> pq;
    int tot=0,time=0;
    for(auto &i:a){
        while(tot+i[2]>k){
            auto [x,y]=pq.top();
            pq.pop();
            tot-=y;
            time=-x;
        }
        time=max(time,i[0]);
        cout<<time<<'\n';
        pq.push({-time-i[1],i[2]});
        tot+=i[2];
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