#include <bits/stdc++.h>
using namespace std;
int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,j,n,m;
    cin>>n>>m;
    int a;
    int c[n+1]={0};
    c[0]=1;
    for(i=0;i<m;i++)
    {
        cin>>a;
        for(j=a;j<=n;j++)
            c[j]+=c[j-a];
    }
    cout<<c[n];
    return 0;
}
