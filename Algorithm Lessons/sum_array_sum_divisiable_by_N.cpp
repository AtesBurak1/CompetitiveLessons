#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> nums){
    vector <int> sums;
    vector <int> temp(n-1,0);
    int ans=0;
    sums[0]=nums[0]%n;
    for(int i=1;i<n;i++)
    {
        sums[i]=(sums[i-1]+nums[i])%n;
    }
    for(int i=0;i<n;i++)
    {
        if(sums[i]==0)
        {
            ans++;
        }
        else
        {
            temp[sums[i]-1]+=1;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(temp[i]>=2)
        {
            ans+=temp[i]*(temp[i]-1)/2;
        }
    }
    return ans;
}