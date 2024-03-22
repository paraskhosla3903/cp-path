#include<bits/stdc++.h>
using namespace std;

int main(){
	// io
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);

	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		int sum = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++){
			if(i > 1){
				sum += 2*a[i];
			} else{
				sum += a[i];
			}
		}
		cout << sum << "\n";
	}
	return 0;
}