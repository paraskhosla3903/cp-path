#include<bits/stdc++.h>
using namespace std;

#define int long long

int maxSubArray(vector<int>& nums) {
    int count = 0; // counts number of -ve entries in nums
    int n = nums.size();
    int current_sum = 0;
    int maximum_sum = 0;
    int max_negative = nums[0];
    for(int i=0;i<n;i++){
        current_sum += nums[i];
        max_negative = max(max_negative,nums[i]);
        if(current_sum<0){
            count++;
            current_sum = 0;
        }
        maximum_sum = max(current_sum,maximum_sum);
    }
    if(count==n){
        return 0;
    }
    return maximum_sum;}

int32_t main(){
	// io
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);

	const int MOD = 1000000000+7;

	int t;cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		vector<int> a(n);
		int sum = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			sum%=MOD;
		}
		// cout << sum << "\n";
		int maxSubarraySum = maxSubArray(a);
		maxSubarraySum %= MOD;
		// cout << maxSubarraySum << "\n";
		// cout << "-" << endl;
		for(int i=1;i<=k;i++){
			sum += maxSubarraySum;
			sum %= MOD;

			maxSubarraySum *= 2;
			maxSubarraySum %= MOD;
			// cout << sum << "\n";
		}
		// cout << "\n";
		cout<<(sum%MOD+MOD)%MOD<<"\n";
	}
	return 0;
}