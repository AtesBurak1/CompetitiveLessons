#include<bits/stdc++.h>
using namespace std;

string solve(int a,int b, int C){
    if(C%2==0)
    {
         if(abs(a)>abs(b))
        return ">";
    else if(abs(a)<abs(b))
        return "<";
    else
        return "=";
    }
    else
    {
         if(a>b)
        return ">";
    else if(a<b)
        return "<";
    else
        return "=";
    }
    
}