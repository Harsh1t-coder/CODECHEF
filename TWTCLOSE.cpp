#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int main()
{
int n ,k;
cin>>n>>k;
int sum=0,arr[n]={0};
while(k--)
{
string s;
int temp;
cin.ignore();
cin>>s;
if(s=="CLOSEALL")
{
sum=0;
 for(int i=0;i<n;i++)
 arr[i]=0;
}
else if(s=="CLICK")
{
    cin>>temp;
    if(arr[temp-1]==0)
    {
        sum++;
        arr[temp-1]=1;
    }
    else if(arr[temp-1]==1)
    {
        sum--;
        arr[temp-1]=0;
    }
}
cout<<sum<<endl;
}
return 0;
}