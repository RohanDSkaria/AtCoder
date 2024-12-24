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

int n,m;
bool isv(v<string> &c, int a, int b){
    return c[a][b]!='#';
}
void solve(){
    int x,y;cin>>n>>m>>x>>y;
    v<string> a(n);cin>>a;
    string t;cin>>t;
    int ans=0;
    v<vi> isV(n,vi(m));
    x--,y--;
    isV[x][y]=1;
    if(a[x][y]=='@') ans++;
    for(auto i:t){
        if(i=='U' && isv(a,x-1,y)) x--;
        else if(i=='D' && isv(a,x+1,y)) x++;
        else if(i=='L' && isv(a,x,y-1)) y--;
        else if(i=='R' && isv(a,x,y+1)) y++;
        if(isV[x][y]==0 && a[x][y]=='@'){
            ans++;
            isV[x][y]=1;
        }
    }
    cout<<x+1<<" "<<y+1<<" "<<ans;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/