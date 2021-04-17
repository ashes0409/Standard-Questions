#include <bits/stdc++.h>
using namespace std;
int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    string t;
    cin>>s>>t;
    int i,n=s.size();
    int j,m=t.size();
    int L[n+1][m+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0)
                L[i][j]=j;
            else if(j==0)
                L[i][j]=i;
            else if(s[i-1]==t[j-1])
                L[i][j]=L[i-1][j-1];
            else
                L[i][j]=1+min(L[i-1][j-1],min(L[i][j-1],L[i-1][j]));
            cout<<L[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<L[n][m];
    return 0;
}
