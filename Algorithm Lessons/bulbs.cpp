#include<bits/stdc++.h>
using namespace std;
void print(vector <int> a){
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int solve(int n, vector<int> a){
    int yes=1,no=0,count=0;
    print(a);
    for(int i=0;i<n;i++){
        if(a[i]!=yes){
            count+=1;
            if(yes)
                yes=0;
            else
                yes=1;
        }
    }
    return count;
}