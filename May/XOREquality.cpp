#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	int m=1000000007;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    //total numbers are pow(2,n)-1
	    //this XOR condition if holded by only even numbers
	    //total number of evens in the range are pow(2,n-1)
	    //cout<<pow(2,n-1)<<endl;     gives TLE
	    int res=1;
	    long long x=2;
	    n=n-1;
	    while(n)
	    {
	        if(n%2!=0)
	        res=res*x % m;
	        n=n/2;
	        x=(x*x)%m;
	    }
	    
	    cout<<res<<endl;
	}
	return 0;
}

