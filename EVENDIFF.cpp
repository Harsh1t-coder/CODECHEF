//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{
    int n;
    
    cin>>n;
    int odd = 0;
    int even = 0;
    int counto  = 0;
    int counte = 0;
    
    for(int i=0;i<n;i++)
      {
         int temp;
         cin>>temp;
         if(temp%2==0)
         counte++;
         else
         counto++;

     }
     return counte>=counto?counto:counte;
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