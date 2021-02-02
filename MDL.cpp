//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{
int n;
cin>>n;
vector<int> arr(n);
 for(int i=0;i<n;i++) cin>>arr[i];
 int maxe = *max_element(arr.begin(),arr.end());
 int mine = *min_element(arr.begin(),arr.end());
 int i1 = max_element(arr.begin(),arr.end())-arr.begin();
 int i2 = min_element(arr.begin(),arr.end())-arr.begin();
 if(i1>i2)
 cout<<mine<<" "<<maxe;
 if(i1<i2)
 cout<<maxe<<" "<<mine;
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