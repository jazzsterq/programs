#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t ;
  while(t--)
  {
    int n,cneg=0;
    cin >>n;
    int a[n];
      for(int i=0;i<n;i++)
      {
        cin >> a[i];
        if(a[i]<0)
          cneg++;
      }
   	cneg%=2;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
      if(sum<0&&cneg==1)
      sum=0;
      if(a[i]==0||a[i]==1||sum==0)
        sum+=a[i];
      else if(a[i]<0&&cneg==0)
        sum*=a[i];
      else if(a[i]<0&&cneg==1)
        sum+=a[i];
      else
        sum*=a[i];
    //cout<<sum<<" "<<a[i]<<"\n";
    }
    
    cout<<sum<<"\n";
  }
}