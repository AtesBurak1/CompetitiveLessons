#include <bits/stdc++.h>

using namespace std;
void bracket(int n,int op,int cl,string out){
	if(out.length()==2*n)
		cout << out  << endl;
	if(op<n){
		out.push_back('(');
		bracket(n,op+1,cl,out);
		out.pop_back();
	}
	if(cl<op){
		out.push_back(')');
		bracket(n,op,cl+1,out);
		out.pop_back();
	}
}
int main()
{
	int n;
	cin >> n;
	string out;
	bracket(n,0,0,out);
	
}
