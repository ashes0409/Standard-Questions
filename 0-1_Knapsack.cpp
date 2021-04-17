#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long int ll;
typedef long double ld;
int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int mw,i,j,n,w,v;
    cin>>mw>>n;
    int dp[mw+1]={0};
    for(j=0;j<n;j++)
    {
        cin>>w>>v;
        for(i=mw;i>=w;i--)
        {
            dp[i]=max(dp[i],v+dp[i-w]);
        }
    }
    cout<<dp[mw];
    return 0;
}
