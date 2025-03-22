#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 105;

ll dp[N];

ll fibo(ll n)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    return dp[n] = fibo(n-1)+fibo(n-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(dp, -1, sizeof dp);

    ll n;
    cin>>n;
    cout<<fibo(n)<<endl;

}
