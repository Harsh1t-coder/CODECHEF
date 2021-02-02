//Program by Harshit Rastogi
#include<bits/stdc++.h>
using namespace std;

int main()
{  
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int count=0;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
	    if(s.find("ch")<=s.size())      
        count++;
		else if(s.find("he")<=s.size()) 
        count++;
		else if(s.find("ef")<=s.size()) 
        count++;
	}
	cout<<count;
	return 0;
}