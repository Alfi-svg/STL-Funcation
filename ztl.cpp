#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    multiset<long long>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    while(t--)
    {
int type;
long long y;
cin>>type;
if(type==0)
{
    cin>>y;
    s.insert(y);

}
else if(type==1)
{
    auto it=s.begin();
    cout<<*it<<"\n";
    s.erase(it);
}
else
{
auto it=prev(s.end());
cout<<*it<<"\n";
s.erase(it);

}






    }




}