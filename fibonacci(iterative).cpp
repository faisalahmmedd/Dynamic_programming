#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 105;

ll fibo[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll n;
    cin>>n;

    fibo[0]=0;
    fibo[1]=1;

    for(ll i=2; i<=n; i++)
    {
        fibo[i]= fibo[i-1]+fibo[i-2];
    }

    cout<<fibo[n]<<endl;

}
