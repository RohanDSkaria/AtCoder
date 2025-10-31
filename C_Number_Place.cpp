#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    vector<vector<int>> a(9,vector<int>(9));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++) cin>>a[i][j];
    }
    auto cr=[&](){
        for(int i=0; i<9; i++){
            set<int> s;
            for(int j:a[i]){
                if(s.count(j)) return 0;
                s.insert(j);
            }
        }
        return 1;
    };
    auto cc=[&](){
        for(int j=0; j<9; j++){
            set<int> s;
            for(int i=0; i<9; i++){
                if(s.count(a[i][j])) return 0;
                s.insert(a[i][j]);
            }
        }
        return 1;
    };
    auto c33=[&](){
        for(int b=0; b<9; b+=3){
            for(int c=0; c<9; c+=3){
                set<int> s;
                for(int i=b; i<b+3; i++){
                    for(int j=c; j<c+3; j++){
                        if(s.count(a[i][j])) return 0;
                        s.insert(a[i][j]);
                    }
                }
            }
        }
        return 1;
    };
    return cr() && cc() && c33();
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/