#include <bits/stdc++.h>

#define ll 				long long int
#define ull 			unsigned long long int
#define MAXN 			1000000007
#define F 				first
#define S 				second
#define pb 				push_back
#define ppb() 			pop_back()
#define mp(x,y)			make_pair(x,y)
#define sz(x) 			((int) x.size())
#define all(p)			p.begin(),p.end()
#define ld 				long double
#define print(a)        for(auto x : a) cout << x << " "; cout << endl
#define print1(a)       for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)   for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << end

using namespace std;

typedef pair<int,int> PII;
template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}

const int sz=2;

struct Mat{
	int m[sz][sz];
	Mat(){
		memset(m,0,sizeof(m));
	}
	void identity(){
		for(int i=0;i<sz;i++)
		{
			m[i][i]=1;
		}
	}
	Mat operator* (Mat a)
	{
		Mat res;
		for(int i=0;i<sz;i++){
			for(int j=0;j<sz;j++){
				for(int k=0;k<sz;k++){
					res.m[i][j]+=m[i][k]*a.m[k][j];
					res.m[i][j]%=MAXN;
				}
			}
		}
		return res;
	}
};
int fib(int n)
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
int main()
{
	cout << fib(3);
	return 0;
}
