#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans=0;
ll N, A, B,arr[34];
void overLaynumber(ll arr[],int number){

	int j = 0;
	ll sum=0;
	while(number > 0){
		int last_bit = number & 1;
		if(last_bit){
			sum+=arr[j];
		}

		j++;
		number = number >> 1;
	}
	if(sum >= A && sum <= B)
		ans++;
}


void generateAllSubsequences(ll arr[]){


	for(int i=0; i < (1<<N);i++){
		overLaynumber(arr,i);
	}
	return;
}

int main(){
	cin >> N >> A >> B;
	for(int i=0; i < N ; i++){
		cin >> arr[i];
	}
	generateAllSubsequences(arr);
	cout << ans;
	
}
