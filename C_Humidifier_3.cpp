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
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,pair<F,S>& p){os<<"{"<<p.first<<","<<p.second<<"}";return os;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
void dfs(int i, int j, v<vi> &ish, int d,v<string> &a){
    ish[i][j]=1;
    if(d==0) return;
    for(int dir=0; dir<4; dir++){
        int ni=i+dx[dir];
        int nj=j+dy[dir];
        if(ni>=0 && ni<ish.size() && nj>=0 && nj<ish[0].size() && a[ni][nj]!='#' && a[ni][nj]!='H'){
            dfs(ni,nj,ish,d-1,a);
        }
    }
}
void solve(){
    int n,m,d;cin>>n>>m>>d;
    v<string> a(n);cin>>a;
    v<vi> ish(n,vi(m,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // if(i==3 && j==1) deb(ish)
            if(a[i][j]=='H') dfs(i,j,ish,d,a);
            // if(i==3 && j==1) deb(ish)
        }
    }
    int ans=0;
    for(auto i:ish){
        for(int j:i) ans+=j;
    }
    cout<<ans;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/