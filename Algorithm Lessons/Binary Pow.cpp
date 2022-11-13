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

ull powr(ull x,ull y)
{	ull res=1;
	// calculate x^y with binary notation
	while(y)
	{
		if(y&1){res*=x;}
		x*=x;
		y/=2; // b>>=2 right shift
	}
	return res;
}
int main()
{
	ull a;
	a=powr(7,3);
	cout << a;
}
