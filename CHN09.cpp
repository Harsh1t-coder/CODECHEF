//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
int abc()
{
    string s;
    cin>>s;
    int x,y;
    x=y=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
        x++;
        else
        y++;
    }
return x<y?x:y;
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