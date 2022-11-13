#include<bits/stdc++.h>
using namespace std;

int totalHammingDistance(vector<int> nums) {
    int total=0,a,counter=0;
    for(int i=0;i<nums.size();i++)
    { 
        for(int j=i+1;j<nums.size();j++)
        { counter=0;
            a=(nums[i]^nums[j]); // sadece 1 ler kalıyor
            while(a)
            {
                a=a&(a-1);
                counter++;
            }
            total+=counter;    
        }
    }
    return total;
}