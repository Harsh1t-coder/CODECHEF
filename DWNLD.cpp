//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    for(int i=0;i<n;i++)
    {
            int a,b;
            cin>>a>>b;
             k=k<0?0:k; // for checking k is less than 0
            if(k-a<0)
            {   
                int temp=a-k;
                sum+=temp*b;
            }
           k=k>0?k-a:0;
          
    }

return sum;
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