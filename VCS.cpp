#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
void abc()
{
    int n,m,k;
 
    cin>>n>>m>>k;
       int arr[n]={0};
     for(int i=0;i<m;i++)
     {
         int temp;
         cin>>temp;
         arr[temp-1]++;

     }
     for(int i=0;i<k;i++)
     {
         int temp;
         cin>>temp;
         arr[temp-1]++;

     }
     
     
     int d=0,e=0;
      for(int i=0;i<n;i++)
      {
          if(arr[i]>1)
          d++;
          if(arr[i]==0)
          e++;
      }
      cout<<d<<" "<<e<<endl;

}
int main()
{
int t ;
cin>>t;
 while (t--)
{
    abc();
//cout<<abc()<<endl;
}
return 0;
}