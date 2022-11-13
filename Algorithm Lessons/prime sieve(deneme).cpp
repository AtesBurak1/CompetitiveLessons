#include <iostream>
#include <vector>
#define ll long long int
#define N 1e5
using namespace std;

vector <bool> pr(N,true);

int main()
{
	for(ll i=2;i<N;i++)
	{
		for(ll j=i*i;j<N;j+=i)
		{
			pr[j]=false;
			
		}
	}	
	pr[0]=pr[1]=false;
	for(int i=0;i<250;i++)
	{
		cout << i << " " << pr[i] << endl;
	}
	return 0;
}
