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

void fn(int n, int m, int i, vi &a){
    if(a.size()==n){
        cout<<a<<endl;
        return;
    }
    for(int j=i; j<=m; j++){
        a.push_back(j);
        fn(n,m,j+1,a);
        a.pop_back();
    }
}
void solve(){
    int n,m;cin>>n>>m;
    vi a;
    fn(n,m,1,a);
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*


#define deb(x) cout<<#x<<" = "<<x<<endl;
class Solution {
public:
    bool flipEquiv(TreeNode* a, TreeNode* b){
        // if(a) deb(a->val)
        // if(b) deb(b->val)
        if(!a && !b) return 1;
        if(!a || !b || a->val!=b->val) return 0;
        if(!a->left && !b->left){
            if(!a->right && !b->right) return 1;
            if(a->right==b->right) return flipEquiv(a->right,b->right);
            return 0;
        }
        if(!a->left && !b->right){
            return (a->right==b->left) && flipEquiv(a->right,b->left);
        }
        if(!a->right && !b->left){
            return (a->left==b->right) && flipEquiv(a->left,b->right);
        }
        if(a->left->val==b->left->val && a->right->val==b->right->val)
            return flipEquiv(a->left,b->left)&&flipEquiv(a->right,b->right);
        if(a->left->val==b->right->val && a->right->val==b->left->val)
            return flipEquiv(a->left,b->right)&&flipEquiv(a->right,b->left);
        return 0;
    }
};

*/