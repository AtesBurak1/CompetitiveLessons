#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    if(num==1)
        return true;
    for(int i=2;i<=num;i++){
        if(num-(i*i) == 0)
            return true;
    }
    return false;
}