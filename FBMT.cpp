//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
string abc()
{   
    map<string,int> arr;
    int n;
    int a=INT_MIN;
    int b=INT_MIN;
    string xy="";
    cin>>n;
     for(int i=0;i<n;i++)
     {
        string s;
        cin>>s;
        arr[s]++;
     }
   
for(auto x:arr)
{
   if(x.second>a)
   {
       xy=x.first;
       a=x.second;
   } 
   else
   {
       b=x.second;
   }
}
if(a!=b)
return xy;
return "Draw";
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