#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}

bool isGoodArray(vector<int> nums) {
      for(int i=1;i<nums.size();i++)
      {
          if(gcd(nums[i],nums[i-1])==1)
            return true;
      }
      return false;
}