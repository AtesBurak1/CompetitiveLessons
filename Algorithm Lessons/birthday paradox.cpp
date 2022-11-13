#include <iostream>

using namespace std;

int main(){
	
	double ans=1.0;
	
	for(int i=1;i<=22;i++)
	{
		ans*=(365-i)/365.0;
	}
	cout << ans;
	// ans =23 kiþi
	return 0;
}
