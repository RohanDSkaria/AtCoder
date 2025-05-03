#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define v vector
#define vi v<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<"{"<<p.first<<","<<p.second<<"}";}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

const int dx[4]={1,1,-1,-1};
const int dy[4]={1,-1,1,-1};
void solve(){
    int n,m;cin>>n>>m;
    int k=min(n,m);
    v<string> a(n);cin>>a;
    auto isk=[&](int i, int j){return i>=0 && i<n && j>=0 && j<m && a[i][j]=='#';};
    auto fn=[&](int x, int y){
        for(int i=1;i<=k; i++){
            for(int d=0; d<4; d++){
                int nx=x+dx[d]*i;
                int ny=y+dy[d]*i;
                if(!isk(nx,ny)) return i-1;
            }
        }
        return k;
    };
    vi b(k+1);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='#') b[fn(i,j)]++;
        }
    }
    for(int i=1; i<=k; i++) cout<<b[i]<<" ";
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/