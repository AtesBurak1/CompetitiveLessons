#include <iostream>

using namespace std;
const int P=5;
int addm(int x,int y)
{
	return (x + y) % P;
}
int subm(int x,int y)
{
	return ((x-y) % P+ P)% P;
}
int mulm(int x,int y)
{
	return (x * y)% P;
}

int powrm(int x,int y)
{
	int res = 1;
	while(y){
		if(y & 1) res = mulm(res,x);
		y = y/2;
		x= mulm(x,x);
	}
	return res;
}
int diwm(int x,int y)
{
	return mulm(x,powrm(y, P-2));
}
int main()
{
	
	// a^p(mod p)==a(mod p) p is prime
	return 0;
}
