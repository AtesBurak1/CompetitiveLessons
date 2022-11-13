#include<bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> nums) {
    unsigned int i=0,ans=0;
    map<int,int> mymap;
    for(i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            int temp=nums[i]&nums[j];
            mymap[temp]++;
        }
    }
    for(i=0;i<nums.size();i++)
    {
        for(auto iter:mymap)
        {
            if((iter.first&nums[i])==0)
                ans+=iter.second;
        }
    }
    return ans;

    
}