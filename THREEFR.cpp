//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
string abc()
{
    int x,y,z;
    cin>>x>>y>>z;
    int sum = x+y+z;
    int a = max(x,y);
    a=max(a,z);
    sum-=a;
    if(a == x+y || a == y+z || a == z+x)
    return "yes";
    return "no";
}
int main()
{
int t ;
cin>>t;
 while (t--)
{
cout<<abc()<<endl;
}
return 0;
}