//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{
    int n;
    cin>>n;
    set<int> arr;
     for(int i=0;i<n;i++)
     {
            int temp;
            cin>>temp;
            arr.insert(temp);
     }
return arr.size();
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