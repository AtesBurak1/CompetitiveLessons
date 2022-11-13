#include<bits/stdc++.h>
using namespace std;
vector<int> subsetsums(vector<int> a) {

	int n = a.size();
	vector<int> result;

	for (int i = 0; i < (1 << n); i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if ((i >> j) & 1) sum += a[j];
		}
		result.push_back(sum);
	}

	return result;
}
long long solve(int n,int x, vector<int> a){
    	vector<int> left, right;

	for (int i = 0; i < n; i++) {
		if (i <= n / 2) left.push_back(a[i]);
		else right.push_back(a[i]);
	}

	vector<int> left_sums = subsetsums(left);
	vector<int> right_sums = subsetsums(right);

	sort(right_sums.begin(), right_sums.end());

	int ans = 0;

	for (auto a : left_sums) {
		ans += upper_bound(right_sums.begin(), right_sums.end(), x-a ) -
		       lower_bound(right_sums.begin(), right_sums.end(),  x-a);
	}
   
    return ans;
}


