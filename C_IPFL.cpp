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
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<"{"<<p.first<<","<<p.second<<"}";}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int n;cin>>n;
    string a,b;
    for(int i=0; i<n; i++){
        char c;cin>>c;
        a+=c;
    }
    for(int i=0; i<n; i++){
        char c;cin>>c;
        b+=c;
    }
    int q,k=0;cin>>q;
    while(q--){
        int t,x,y;cin>>t>>x>>y;
        if(t==2){
            k^=1;
            continue;
        }
        x--;y--;
        if(y<n){
            if(k&1) swap(b[x],b[y]);
            else swap(a[x],a[y]);
        }
        else if(x>=n){
            x-=n;y-=n;
            if(k&1) swap(a[x],a[y]);
            else swap(b[x],b[y]);
        }
        else{
            y-=n;
            if(k&1) swap(a[y],b[x]);
            else swap(a[x],b[y]);
        }
    }
    if(k&1) cout<<b<<a;
    else cout<<a<<b;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/