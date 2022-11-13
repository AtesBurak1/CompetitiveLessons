#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> closestDivisors(int num) {
    vector <int> vec;
    if(sqrt(num+1)==(int)sqrt(num+1)){
        vec.push_back(sqrt(num+1));
        vec.push_back(sqrt(num+1));
        return vec;
    }
    if(sqrt(num+2)==(int)sqrt(num+2)){
        vec.push_back(sqrt(num+2));
        vec.push_back(sqrt(num+2));
        return vec;
    }
    vector <int> vec2;
    for(int i=1;i<sqrt(num+1);i++){
        if((num+1)%i==0)
            vec.push_back(i);
    }
    for(int i=1;i<sqrt(num+2);i++){
        if((num+2)%i==0)
            vec2.push_back(i);
    }
    int i=vec.size()-1;
    int m=abs(vec[i]-(num+1)/vec[i]);
    int j=vec2.size()-1;
    int n=abs(vec2[j]-(num+2)/vec2[j]);
    vector <int> ans;
    if(n<m){
        ans.push_back(vec2[j]);
        ans.push_back((num+2)/vec2[j]);
    }
    else{
        ans.push_back(vec[i]);
        ans.push_back((num+1)/vec[i]);
    }
    return ans;
}