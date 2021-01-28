//Program by Harshit Rastogi
#include <bits/stdc++.h> 
#define pb push_back
using namespace std;
string  abc()
{
    int one=0;
 for(int i=0;i<5;i++)
 {
     int temp;
     cin>>temp;
     if(temp==1)
     one++;
 }
 if(one==0)
    return "Beginner";
 if(one==1)
    return "Junior Developer";
 if(one==2)
    return "Middle Developer";
 if(one==3)
    return "Senior Developer";
 if(one==4)
    return "Hacker";
 if(one==5)
    return "Jeff Dean";

return "zero";

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