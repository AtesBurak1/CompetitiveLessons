#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long solve(int x,int y,int p, int q){
    //printf("%d %d %d %d  ",x,y,p,q);
    if(p/q==1 && x!=y)
        return -1;
    if((double)p/q==0 && x!=0)
        return -1;
    else if((double)p/q==0 && x==0)
        return 0;
    
    double m1,m2;
    long long n1;
    m1=(double)y/q;
    m2=(double)x/p;
    n1=max(ceil(m1),ceil(m2));
   // cout <<m1 << " "<< m2 << " "<< n1<<endl;
    ll ans=q*n1-y;
    return ans;
}