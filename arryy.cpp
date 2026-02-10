#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) v.push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            v.push_back(i);
        }
    }
  cout<<v[(n-1)+k];




}