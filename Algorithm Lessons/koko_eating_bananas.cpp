#include<bits/stdc++.h>
using namespace std;
bool canEat(vector <int> piles,int N,int h,int mid){
    int count=0;
    while(N!=0){
        if(piles[N-1]>mid){
            piles[N-1]-=mid;
            count++;
        }else{
            piles[N-1]=0;
            N--;
            count++;
        }
        if(count>h)
            return false;
    }
    return true;
}
int minEatingSpeed(vector<int> piles, int h) {
    sort(piles.begin(),piles.end());
    int N=piles.size();
    int s=1;
    int e=piles[N-1];
    int ans=e;
    while(s<=e){
        int mid=(s+e)/2;
        bool can=canEat(piles,N,h,mid);
        if(can){
            ans=mid;
            e=mid-1;
        }
        else
            s=mid +1;
    }
    return ans;
}