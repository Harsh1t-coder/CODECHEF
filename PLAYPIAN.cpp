//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
string abc()
{
string s;
cin>>s;
int x=0,y=0;
        for(int i=0,a=1;s[i]!='\0';i++)
        {
                if(a<3)
                {
                    if(s[i]=='A')
                    x++;
                    else if(s[i]=='B')
                    y++;
                    a++;
                    if(x>1 || y>1)
                    return "no";
                }
                if(a==3)
                {
                    a=1;
                    x=0;
                    y=0;
                }
                       
        }
        return "yes";
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