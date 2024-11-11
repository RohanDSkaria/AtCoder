#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int bfs(int n, v<vi> &a){
    vi d(n+1,-1),p(n+1,-1);
    int ans=INT_MAX;
    queue<int> q;
    q.push(1);
    d[1]=0;
    while(!q.empty()){
        int nd=q.front();
        q.pop();
        for(int i:a[nd]){
            if(d[i]==-1){
                d[i]=d[nd]+1;
                p[i]=nd;
                q.push(i);
            }
            else if(p[nd]!=i && i==1) ans=min(ans,d[nd]+1);
        }
    }
    return ans==INT_MAX?-1:ans;
}
void solve(){
    int n,m;cin>>n>>m;
    v<vi> a(n+1);
    for(int i=0; i<m; i++){
        int x,y;cin>>x>>y;
        a[x].pb(y);
    }
    cout<<bfs(n,a)<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/