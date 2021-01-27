#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
cpp_int fact(int n)
{ cpp_int ans=1;
    for(int i=1;i<=n;i++)
    { 
        ans=i*ans;
    }
    return ans;
}
int main() 
{ int t; cin>>t;
  while(t--)
  { int n; cin>>n;
    cout<<fact(n)<<endl;
  }
	return 0;
}
