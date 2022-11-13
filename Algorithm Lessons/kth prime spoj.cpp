#include<iostream>
#include <cmath>
#include<vector>
#define N 87000000
#define ll long long
using namespace std;



void primeSieve(vector<int> &sieve){

	//Mark 1 and 0 as not prime
	sieve[1] = sieve[0] = 0;
	//start from 3 and mark all multiples of given i (prime) as not prime
	for(ll i=3; i<=sqrt(N); i+=2){	
		if(sieve[i]){
			for(ll j = i*i; j<=N; j = j + 2*i){
				//marking j as not prime
				sieve[j] = 0;
			}
		}
	}
}


int main(){

	vector<int> sieve(N+1,1); //fill constructor
	primeSieve(sieve);
	sieve[2]=1;
	vector<int> sieve1;
	sieve1.push_back(2);
	for(int i=3;i < N;i+=2){
		if(sieve[i])
			sieve1.push_back(i);
	}

	int n,k, m;
	cin >> n;
	for(int i = 0; i < n ;i++){
		cin >> m;
		cout << sieve1[m-1] << endl;
	}
	

	return 0;
}
