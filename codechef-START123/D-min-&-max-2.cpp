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
        if(n%2==0){
            sum = n*(n/2+1);
        } else{
            sum = n*(n/2+1);
            sum += (n+1)/2;
        }
        cout << sum / 2 << "\n";
    }
    return 0;
}