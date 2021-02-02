//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
     for(int i=0;i<n;i++) cin>>arr[i];
     sort(arr.begin(),arr.end());
     int a = n ;
     a+=k;
     a =floor(a/2);
     return arr[a];
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