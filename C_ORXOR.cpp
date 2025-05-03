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

int ans=1<<30;
int fn2(vi &a){
    int x=0;
    for(int i:a) x^=i;
    return x;
}
void fn(vi &a, int k, vi &t, int val){
    if(k==a.size()){
        if(val) t.pb(val);
        ans=min(ans,fn2(t));
        if(val) t.pop_back();
        return;
    }
    fn(a,k+1,t,val|a[k]);
    t.pb(val|a[k]);
    fn(a,k+1,t,0);
    t.pop_back();
}
void solve(){
    int n;cin>>n;
    vi a(n),t;cin>>a;
    fn(a,0,t,0);
    cout<<ans;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/