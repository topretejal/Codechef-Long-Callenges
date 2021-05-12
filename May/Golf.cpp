#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int  t,flag;
    long n,x,k;

    cin>>t;
    while(t--)
    {
        cin>>n>>x>>k;
        flag=0;
        if(x%k==0)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
        if(flag==0)
        {
            if((n+1-x)%k==0)
            {
                cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
    //Gives TLE
// 	int t,flag;
// 	long  N,x,k;
// 	long i;
// 	cin>>t;
	
// 	while(t--)
// 	{
// 	    cin>>N>>x>>k;
// 	    i=0;
//     	flag=0;
// 	    if(x%k==0)
// 	    {
// 	        while(i*k<=N+1)
//         	{
//         	    if(i*k==x)
//     	        {
//     	            cout<<"YES"<<endl;
//     	            flag=1;
//     	            break;
//     	        }
//     	        i++;
//         	}
// 	    }
    	
//     	else
//     	{
//         	i=0;
//         	if(flag==0)
//         	{
//         	    while(N+1-i*k>=0)
//         	    {
//         	        if(N+1-i*k==x)
//     	        {
//     	            cout<<"YES"<<endl;
//     	            flag=1;
//     	            break;
//     	        }
//     	        i++;
        	        
//         	    }
//         	}
//     	}
//     	if(flag==0)
//     	{
//     	    cout<<"NO"<<endl;
//     	}
// 	}
	return 0;
}

