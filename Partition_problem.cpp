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
    int i,j,n,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2)
    {
        cout<<"Not possible";
        return 0;
    }
    else
        s/=2;

    pair<bool,int> dp[s+1]={{0,0}};
    dp[0].first=1;
    for(j=0;j<n;j++)
    {
        for(i=s;i>=a[j];i--)
        {
            if(dp[i-a[j]].first==1)
            {
                dp[i].first=1;
                dp[i].second=i-a[j];
            }
        }
    }
    if(dp[s].first==0)
        cout<<"Not possible";
    else
    {
        cout<<"Possible\n";
        i=s;
        while(i>0)
        {
            cout<<i-dp[i].second<<" ";
            i=dp[i].second;
        }
    }
    return 0;
}
