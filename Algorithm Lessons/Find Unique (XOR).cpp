#include <bits/stdc++.h>

#define ll 				long long int
#define ull 			unsigned long long int
#define MAXN 			1000000007
#define F 				first
#define S 				second
#define pb(x) 			push_back(x)
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

// 2N+1 (one unique number)
int findUnique(int arr[],int s) // You can do it with hash map it is same time complexity but in XOR space complexity is O(1)
{
	int Xor=0;
	for(int i=0;i<s;i++)
		Xor=Xor^arr[i];
		
	return Xor;
}

int main()
{
	int arr[]={1,2,3,6,7,90,3,2,1,6,90};
	cout << "Unique number is : " << findUnique(arr,sizeof(arr)/sizeof(int)) << endl;
	return 0;
}


