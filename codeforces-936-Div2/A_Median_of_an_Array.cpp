#include<bits/stdc++.h>
using namespace std;

// Logic: Count the number of elements equal to original median to its right

int main(){
    //io 
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> q(n);
        for(int i=0;i<n;i++){
            cin>>q[i];
        }    
        sort(q.begin(),q.end());
        int mid = (n-1)/2;
        int c = 1;
        for(int i=mid+1;i<n;i++){
            if(q[i]!=q[mid]){
                break;
            } else{
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
