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

vi isp;
const int m=3e5;
void seev(){
    for(int i=2; i*i<m; i++){
        if(isp[i]){
            for(int j=i*i; j<m; j+=i) isp[j]=0;
        }
    }
}
void solve(){
    int n;cin>>n;
    isp.assign(m,1);
    seev();
    vi pr;
    for(int i=2; i<m; i++) if(isp[i]) pr.pb(i);
    int nn=pr.size(),ans=0;
    for(int i=0; i<nn; i++){
        for(int j=i+1; j<nn; j++){
            int k=pr[i]*pr[i]*pr[j];
            if(k>n) break;
            int kk=sqrt(n/k);
            int kkk=upper_bound(all(pr),kk)-pr.begin();
            if(kkk-1>j) ans+=kkk-j-1;
            else break;
        }
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