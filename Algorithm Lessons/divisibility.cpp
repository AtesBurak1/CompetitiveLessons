#include<bits/stdc++.h>
using namespace std;

int numDivisible(int l,int r, vector<int> arr){
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        for(auto it:arr)
        {
            if(i%(it)==0)
            {
                ans++;
                break;
            }
        }
    }
    return ans;
}