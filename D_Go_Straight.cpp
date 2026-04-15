#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<string> g(n);
    for(auto& i:g) cin>>i;
    pair<int,int> st,en;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(g[i][j]=='S') st={i,j};
            if(g[i][j]=='G') en={i,j};
        }
    }

    const int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
    const char dir[]={'U','D','L','R'};

    vector pre(n,vector<array<int,5>>(m,{-1,-1,-1,-1,-1}));
    queue<tuple<int,int,int>> q;
    pre[st.first][st.second][4]=-2;
    q.push({st.first,st.second,4});

    int r=-1,c=-1,dd=-1;
    while(!q.empty()){
        auto [x,y,d]=q.front();
        q.pop();
        if(x==en.first && y==en.second){
            r=x;
            c=y;
            dd=d;
            break;
        }
        for(int nd=0; nd<4; nd++){
            if(g[x][y]=='o' && d!=4 && nd!=d) continue;
            if(g[x][y]=='x' && nd==d) continue;
            int nx=x+dx[nd],ny=y+dy[nd];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(g[nx][ny]=='#' || pre[nx][ny][nd]!=-1) continue;
            pre[nx][ny][nd]=d;
            q.push({nx,ny,nd});
        }
    }
    if(r==-1){
        cout<<"No\n";
        return;
    }
    string ans;
    while(dd!=4){
        ans+=dir[dd];
        int t=pre[r][c][dd];
        r-=dx[dd];
        c-=dy[dd];
        dd=t;
    }
    reverse(ans.begin(),ans.end());
    cout<<"Yes\n"<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/