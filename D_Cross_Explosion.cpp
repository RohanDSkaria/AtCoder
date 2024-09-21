#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,m,q;cin>>n>>m>>q;
    v<set<int>> row(n),col(m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            row[i].insert(j);
            col[j].insert(i);
        }
    }
    auto erase = [&](int i, int j){row[i].erase(j),col[j].erase(i);};

    while(q--){
        int r,c;cin>>r>>c;
        r--,c--;
        
        if(row[r].count(c)){
            erase(r,c);
            continue;
        }
        
        auto it = row[r].upper_bound(c);
        if(it != end(row[r])) erase(r,*it); // right
        it = row[r].upper_bound(c);
        if(it != begin(row[r])) erase(r,*prev(it)); // left

        it = col[c].upper_bound(r);
        if(it != begin(col[c])) erase(*prev(it),c); // up
        it = col[c].upper_bound(r);
        if(it != end(col[c])) erase(*it,c);
    }
    
    int ans=0;
    for(auto i:row) ans+=i.size();
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/