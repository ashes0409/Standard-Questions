#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,mid,beg,last,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    beg=0;
    last=n;
    mid=(beg+last)/2;
    while(beg<last)
    {
        if(a[mid]<=x && a[mid+1]>x)
        {
            cout<<mid+1;
            return 0;
        }
        else if(a[mid]>x)
        {
             last=mid-1;
             mid=(beg+last)/2;
        }
        else if(a[mid]<=x && a[mid+1]<=x)
        {
            beg=mid+1;
            mid=(beg+last)/2;
        }
        if(mid==0 && a[mid]>x)
        {
            cout<<"No element less than x";
            return 0;
        }
        if(mid==(n-1))
        {
            cout<<mid+1;
            return 0;
        }
    }
}
