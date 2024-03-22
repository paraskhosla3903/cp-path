#include<bits/stdc++.h>
using namespace std;

int main(){
    // io
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t;cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += 2*a[i];
        }
        for(int i=0;i<q;i++){
            int x;cin>>x;
            int x0, y0;
            bool flag = false;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    int c = sum - (a[i] + a[j]);
                    if(c == x){
                        x0 = i; y0 = j;
                        flag = true;
                        break;
                    }
                }
                if(flag == true){
                    break;
                }
            }
            if(flag == true){
                cout << a[x0] << " ";
                for(int i=0;i<n;i++){
                    if(i == x0 || i == y0){
                        continue;
                    }
                    cout << a[i] << " ";
                }
                cout << a[y0];
                cout << "\n";
            } else{
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}