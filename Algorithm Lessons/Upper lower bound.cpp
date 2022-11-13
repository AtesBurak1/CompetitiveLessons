#include <bits/stdc++.h>
#define ll long long
using namespace std;
int lower(vector <int> vec,int num){
	int s=0;
	int e=vec.size()-1;
	
	int ans = -1;
	
	while(s<=e){
		int mid=(s+e)/2;
		if(vec[mid]==num){
			ans=mid;
			e=mid-1;
		}else if(vec[mid]>num){
			e=mid -1;
		}else{
			s=mid + 1;
		}
	}
	return ans;
}
int upper(vector <int> vec,int num){
	int s=0;
	int e=vec.size()-1;
	
	int ans = -1;
	
	while(s<=e){
		int mid=(s+e)/2;
		if(vec[mid]==num){
			ans=mid;
			s=mid+1;
		}else if(vec[mid]>num){
			e=mid -1;
		}else{
			s=mid + 1;
		}
	}
	return ans;
}
int main(){
	vector <int> vec={0,0,0,1,1,1,1,2,3,4,5,5,5,5,6,6,6,6,8,8,8,8,8,9,9,9,9,9,10,10};
	cout << upper(vec,5)-lower(vec,5) + 1;
	return 0;
}
