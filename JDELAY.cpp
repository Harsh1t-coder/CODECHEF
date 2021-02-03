//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{   int count = 0;
    int n ;
    cin>>n;
     for(int i=0;i<n;i++)
     {
         int s,j;
         cin>>s>>j;
         if((j-s)>5)
         count++;
     }
return count;
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