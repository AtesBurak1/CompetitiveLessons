#include<bits/stdc++.h>
#define MAXN 1000000007

using namespace std;
const int sz=2;

struct Mat{
long long	 int m[sz][sz];
	Mat(){
		memset(m,0,sizeof(m));
	}
	void identity(){
	    int i;
		for(i=0;i<sz;i++)
		{
			m[i][i]=1;
		}
	}
	Mat operator* (Mat a)
	{
		Mat res;
		long long int i,j,k;
		for( i=0;i<sz;i++){
			for( j=0;j<sz;j++){
				for( k=0;k<sz;k++){
					res.m[i][j]+=m[i][k]*a.m[k][j];
					res.m[i][j]%=MAXN;
				}
			}
		}
		return res;
	}
};
long long int fib( int n)
{
	Mat res;
	res.identity();
	Mat T;
	T.m[0][0] = T.m[1][0] = T.m[0][1] = 1;
	T.m[1][1] = 0;
	if(n<=2) return 1;
	n-=2;
	while(n)
	{
		if(n&1) res=res*T;
		T=T*T;
		n/=2;
	}
	return (res.m[0][0]+res.m[0][1])%MAXN;
}
 long long int fibSum( int n,int m){
     long long int i,sum=0;
    for(i=n;i<=m;i++)
    {
        sum+=fib(i);
        sum%=(MAXN);
    }
    return sum;
}