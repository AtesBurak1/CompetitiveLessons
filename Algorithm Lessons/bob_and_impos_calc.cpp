#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m, vector<int> a){
    int ans=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans=ans*abs(a[i]-a[j]);
            ans%=m;
        }
    }
    return ans;
}