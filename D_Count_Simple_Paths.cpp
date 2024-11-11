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

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int fn(v<string> &a, int k, int i, int j,v<v<bool>> &vis){
    if(vis[i][j]) return 0;
    if(k==0) return 1;
    vis[i][j]=1;
    int ans=0;
    for(int d=0; d<4; d++){
        if(i+dx[d]<0 || i+dx[d]>a.size()-1) continue;
        if(j+dy[d]<0 || j+dy[d]>a[0].size()-1) continue;
        if(a[i+dx[d]][j+dy[d]]=='#') continue;
        ans+=fn(a,k-1,i+dx[d],j+dy[d],vis);
    }
    vis[i][j]=0;
    return ans;
}
void solve(){
    int n,m,k;cin>>n>>m>>k;
    v<string> a(n);cin>>a;
    v<v<bool>> vis(n,v<bool>(m,0));
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='.'){
                ans+=fn(a,k,i,j,vis);
                vis.assign(n,v<bool>(m,0));
            }
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/