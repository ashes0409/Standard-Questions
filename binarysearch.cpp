#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,i,m,mid,beg,last,l1,b1,c1,c2;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  cin>>m;
  beg=0;
  last=n;
  mid=(beg+last)/2;
  while(beg<last)
  {
      if(a[mid]==m)
      {
          l1=mid;
          b1=mid;
          mid=(beg+l1)/2;
          while(beg<l1 && mid>beg)
          {
              if(a[mid]==m && a[mid-1]<m)
              {
                  c1=mid;
                  cout<<c1+1;
                  break;
              }
              else if(a[mid]<m)
              {
                  beg=mid+1;
                  mid=(beg+l1)/2;
              }
              else if(a[mid-1]==m)
              {
                  l1=mid-1;
                  mid=(beg+l1)/2;
              }
              if(mid==beg)
              {
                  c1=mid;
                  cout<<c1+1;
                  break;
              }
          }
          mid=(b1+last)/2;
          while(b1<last && mid<last)
          {
              if(a[mid]==m && a[mid+1]>m)
              {
                  c2=mid;
                  cout<<"\n"<<c2+1;
                  break;
              }
              else if(a[mid]>m)
              {
                  last=mid-1;
                  mid=(b1+last)/2;
              }
              else if(a[mid+1]==m)
              {
                  b1=mid+1;
                  mid=(b1+last)/2;
              }
              if(mid==last)
              {
                  c2=mid;
                  cout<<"\n"<<c2+1;
                  break;
              }
          }
          return 0;
      }
      else if(a[mid]>m)
      {
          last=mid-1;
          mid=(beg+last)/2;
      }
      else if(a[mid]<m)
      {
          beg=mid+1;
          mid=(beg+last)/2;
      }
  }
  cout<<"Not found";
  return 0;
}
