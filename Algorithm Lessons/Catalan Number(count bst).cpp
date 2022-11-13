#include <iostream>


using namespace std;

int countBST(int n){
	if(n==0 || n==1)
		return 1;
	int ans=0;
	for(int i=1;i<=n;i++){
		int x=countBST(i-1);
		int y=countBST(n-i);
		ans+=x*y;
	}
	return ans;
}
int main(){
	
	cout << countBST(10);
	
	return 0;
}
