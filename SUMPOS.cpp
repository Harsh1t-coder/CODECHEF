//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
string abc()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d,e,f;
    d=a+b;
    e=b+c;
    f=a+c;
    if(d==c || e == a || f == b)
    return "YES";
    else
    return "NO";
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