#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<string> a(n);
    for(auto& i:a) cin>>i;
    const int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='#') continue;
            bool ya=1;
            queue<pair<int,int>> q;
            q.push({i,j});
            a[i][j]='#';
            while(!q.empty()){
                auto [x,y]=q.front();
                q.pop();
                if(x==0 || x==n-1 || y==0 || y==m-1) ya=0;
                for(int d=0; d<4; d++){
                    int nx=x+dx[d],ny=y+dy[d];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]=='.'){
                        q.push({nx,ny});
                        a[nx][ny]='#';
                    }
                }
            }
            ans+=ya;
        }
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/