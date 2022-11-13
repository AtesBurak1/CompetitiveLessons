#include<iostream>
#include<vector>
using namespace std;

//Bottom Up NCR % m 
vector<vector<int> > binomialCoefficient(int n,int k){

	vector< vector<int> > table(n + 1, vector<int>(k+1,0));

	for(int i=0; i<=n; i++){
		for(int j=0; j<= min(i,k); j++){

			//base case 
			if(j==0 || j == i){
				table[i][j] = 1;
			}
			else{
				table[i][j] = table[i-1][j-1] + table[i-1][j];
			}
		}
	}
	return table;

}

int main(){
	int n;
	cin>>n;	vector<vector<int> > table = binomialCoefficient(n,n);


			cout << table[n][5]+table[n][6]+table[n][7]<<endl;


	return 0;
}
