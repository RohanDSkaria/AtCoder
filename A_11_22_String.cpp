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
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
	int n;cin>>n;
    if(!(n&1)){
        cout<<"No"<<endl;
        return;
    }
	string s;cin>>s;
	for(int i=0; i<(n/2); i++){
	    if(s[i]!='1'){
	        cout<<"No"<<endl;
	        return;
	    }
	}
	if(s[n/2]!='/'){
	    cout<<"No"<<endl;
	        return;
	}
	for(int i=(n/2)+1; i<n; i++){
	    if(s[i]!='2'){
	        cout<<"No"<<endl;
	        return;
	    }
	}
	cout<<"Yes"<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}