#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll CPT(ll N)
{
    ll count_pairs = 0;
    ll t=sqrt(N);
    for (int i=1;i<=t;i++)
    {
        count_pairs+=(N/i)-(i-1);
    }
    count_pairs*=2;
    count_pairs-=t;
    return count_pairs;
}
int main()
{
    ll n,i,j;
    cin>>n;
    ll s;
    s=CPT(n);
    cout<<"Number of pairs with product less than n is "<<s;
    return 0;
}
