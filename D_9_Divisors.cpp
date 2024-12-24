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

vi seev(int n){
    vi primes;
    v<bool> isp(n+1,1);
    isp[0]=isp[1]=0;
    for(int i=2; i<=n; i++){
        if(isp[i]){
            primes.pb(i);
            for(int j=i*i; j<=n; j+=i) isp[j]=0;
        }
    }
    return primes;
}
// int fn(int a, int b){
//     int ans=1;
//     while(b){
//         if(b&1) ans*=a;
//         a*=a;
//         b>>=1;
//     }
//     return ans;
// }
void solve(){
    int n;cin>>n;
    vi primes=seev(sqrt(n)+1);
    int ans=0;
    for(int p:primes){
        if(pow(p,8)<=n) ans++;
        else break;
    }
    int m=primes.size();
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(pow(primes[i],2)*pow(primes[j],2)<=n) ans++;
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