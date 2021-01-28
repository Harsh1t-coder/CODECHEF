//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc();
int main()
{
int t ;
cin>>t;
 while (t--)
{
int n;
cin>>n;
vector<int> arr(n);
 for(int i=0;i<n;i++) cin>>arr[i];
 sort(arr.begin(),arr.end());
 cout<<arr[0]<<endl;
}
return 0;
}