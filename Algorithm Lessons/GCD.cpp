#include <iostream>

using namespace std;

int GCD(int a,int b)
{
	if(b==0)
		cout << "GCD is: " << a << endl;
	else
		GCD(b,a%b);
}
/* Possible way
int GCD(int a,int b)
{
	if(b==0)
		return a;
	return GCD(b,a%b);
}
     COMPELXITY log(a)
*/

int main()
{
	GCD(20,5);
	GCD(32,15);
	GCD(20,8);
	
	return 0;
}
