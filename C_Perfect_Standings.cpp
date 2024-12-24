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
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x;return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

int fn(int n){
    int c=0;
    while(n) n&=n-1,c++;
    return c;
}
void solve(){
    // v<pair<int,char>> a(5);
    // for(int i=0; i<5; i++){
    //     cin>>a[i].first;
    //     a[i].second='A'+i;
    // }
    // sort(all(a));
    // for(int k=0; k<5; k++){
    //     for(int i=0; i<32; i++){
    //         if(fn(i)==k){
    //             v<char> t;
    //             for(int j=0; j<5; j++){
    //                 if(i&(1<<j)) continue;
    //                 t.pb(a[j].second);
    //             }
    //             sort(all(t));
    //             cout<<t<<endl;
    //         }
    //     }
    // }
    vi a(5);cin>>a;
    v<pair<int,string>> b;
    for(int i=1; i<32; i++){
        string t="";
        int c=0;
        for(int j=0; j<5; j++){
            if(i&(1<<j)){
                t+=('A'+j);
                c+=a[j];
            }
        }
        b.pb({c,t});
    }
    sort(all(b),[&](const pair<int,string> a, const pair<int,string> b){
        if(a.first!=b.first) return a.first>b.first;
        return a.second<b.second;
    });
    for(auto &i:b) cout<<i.second<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/