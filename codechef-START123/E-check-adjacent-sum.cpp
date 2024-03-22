#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    // io
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int sum = 0;
        sum = (n * (n+1)) / 2 + n - 1;
        cout << sum << "\n";
    }
    return 0;
}