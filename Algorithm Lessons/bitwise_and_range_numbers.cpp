#include<bits/stdc++.h>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
    int ans=left;
    for(int i=left+1;i<=right;i++)
    {
        ans=ans & i; // left & left+1 & left+2 & ... & right
    }
    return ans;
}