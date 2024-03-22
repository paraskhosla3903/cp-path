#include<bits/stdc++.h>
using namespace std;

int main(){
    // io
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        int rooms = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            rooms += (a[i]+1)/2;
        }
        cout << rooms << "\n";
    }
    return 0;
}