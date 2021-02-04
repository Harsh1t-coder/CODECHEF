//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{
    int n,k;
    cin>>n>>k;
    unordered_set<string> uset;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<k;i++)
    {
        int temp;
        cin>>temp;
        for(int j=0;j<temp;j++)
        {
            string a1;
            cin>>a1;
            uset.insert(a1);
        }
    }
     for(int i=0;i<n;i++)
     {
         if(uset.find(arr[i])!=uset.end())
         cout<<"YES";
         else
         cout<<"NO";
         cout<<" ";
     }
     cout<<endl;
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