//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
string abc()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int unsolv=0;
    int slow=0;
    int bot=0;
     for(int i=0;i<n;i++)
     {
         int temp;
         cin>>temp;
         if(temp==-1)
         unsolv++;
         if(temp>k)
         slow++;
         if(temp>=0 && temp <=1)
         bot++;  
     }
     if((n-unsolv)<ceil(n/2)
        return "Rejected";
    if(slow>0)
    return "Too slow";
    if(bot==n)
    return "Bot";
    return "Accepted";
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