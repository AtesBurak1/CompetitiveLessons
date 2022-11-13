#include<bits/stdc++.h>
using namespace std;
int ans=0;
int solve(vector<int> nums, int target,int i,int sum){
    if(i==nums.size() && sum==target){
        ans++;
        return 1;
    }
    if(i==nums.size())
    	return 0;
    sum-=nums[i];
    solve(nums,target,i+1,sum);
    sum+=nums[i];
    sum+=nums[i];
    solve(nums,target,i+1,sum);
    return 0;
    
    
}
int findTargetSumWays(vector<int> nums, int target) {
    
    solve(nums,target,0,0);
    return ans;
}
int main()
{
	vector <int> nums(5,1);
	int target=3;
	cout << findTargetSumWays(nums,target);
}
