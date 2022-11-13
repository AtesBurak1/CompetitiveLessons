#include<bits/stdc++.h>
#define N 100000
#define ll long long
using namespace std;

int solve(int n){
    vector <int> primes(N,1);
    primes[0]=primes[1]=0;
    for(ll i=2;i<=N;i++)
    {
        if(primes[i]==1)
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                primes[j]=0;
            }
        }
    }
    int count =0;
    for(int i=2;i<n;i++)
    {
        if(primes[i])
            for(int j=i;j<n;j++)
            {
                if(primes[j])
                {
                    if(primes[i+j])
                        count++;
                }
            }
    }
    return count;
}