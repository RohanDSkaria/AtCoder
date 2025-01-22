#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,pair<F,S>& p){os<<"{"<<p.first<<","<<p.second<<"}";return os;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

const int dx[]={1,0,-1,0};
const int dy[]={0,-1,0,1};
bool isk(v<string> &a, int i, int j){
    return i>=0 && i<a.size() && j>=0 && j<a[0].size();
}
bool fn(v<string> &a, int i, int j){
    for(int d=0; d<4; d++){
        int ni=i+dx[d];
        int nj=j+dy[d];
        if(isk(a,ni,nj)){
            if(a[ni][nj]=='#') return 1;
        }
    }
    return 0;
}
void solve(){
    int n,m;cin>>n>>m;
    v<string> a(n);cin>>a;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='#'){
                if(!fn(a,i,j)){
                    cout<<"No";
                    return;
                }
            }
        }
    }
    cout<<"Yes";
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/