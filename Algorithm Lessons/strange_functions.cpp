#include<bits/stdc++.h>
using namespace std;
int power1(int x,int y)
{	int res=1;
	// calculate x^y with binary notation
	while(y)
	{
		if(y&1){res*=x;
		    res%=9;
		}
		x*=x;
		x%=9;
		y/=2; // b>>=2 right shift
	}
	return res;
}
int solve(long long A, long long N){
    int ans=power1(A,N);
    if(!ans)
        ans=9;
    return ans;
}