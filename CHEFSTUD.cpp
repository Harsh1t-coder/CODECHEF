//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
#define ll long long
using namespace std;
ll abc()
{
   
    ll cnt=0;
    string s;
    cin>>s;
    vector<char> arr;
//s+='*';
     for(ll i=0;i<s.length();i++)
     {
           if(s[i]=='<' && s[i+1]=='>')
        cnt++;
     }

 
return cnt;
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