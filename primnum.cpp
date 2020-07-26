#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
  int i,j;
  vector<bool>isprime(n+1,true);
  isprime[0]=false,isprime[1]=false;
  for(i=2;i<=n;i++)
  {
    if(isprime[i] && (long long)i*i<=n)
    {
      for(j=i*i;j<=n;j+=i)
        isprime[j]=false
    }
    }
  for(i=0;i<=n;i++)
  {
    if(iprime[i]) cout<<i<<" ";
  }
  cout<<"\n";
  return 0;
  }
