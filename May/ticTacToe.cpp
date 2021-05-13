#include <iostream>

using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--)
	{
	    char s[3][3];
	    int count_=0,countO=0,countX=0;
	    int flagO=0,flagX=0;
	    for(int i=0;i<3;i++)
	    {
	        for(int j=0;j<3;j++)
	        {
	            cin>>s[i][j];
	            if(s[i][j]=='_')
	                count_++;
	            if(s[i][j]=='O')
	                countO++;
	            if(s[i][j]=='X')
	                countX++;
	        }
	    }
	   // cout<<"count _"<<count_<<endl;
	        
	        for(int i=0;i<3;i++)
	        {
	            //row wise win
	            if(s[i][0]==s[i][1] && s[i][1]==s[i][2])
	            {
	                if(s[i][0]=='O')
	                    flagO++;
	                else if(s[i][0]=='X')
	                    flagX++;
	            }
	        }
	        for(int j=0;j<3;j++)
	        {
	            //column wise win
	            if(s[0][j]==s[1][j]&&s[1][j]==s[2][j])
	            {
	                if(s[0][j]=='O')
	                    flagO++;
	                else if(s[0][j]=='X')
	                    flagX++;
	            }
	        }
	        //diagonal check for win
	        if(s[0][0]==s[1][1] && s[1][1]==s[2][2])
	        {
	            if(s[0][0]=='X')
	                flagX++;
	            if(s[0][0]=='O')
	                flagO++;
	        }
	        //opposite diagonal check for win
	        if(s[0][2]==s[1][1] && s[1][1]==s[2][0])
	        {
	            if(s[1][1]=='X')
	                flagX++;
	            if(s[1][1]=='O')
	                flagO++;
	        }
	   if(countO>countX)        //since X starts first
	        cout<<3<<endl;
	   else if(countX-countO>1) // can't be more than 1 step ahead
	        cout<<3<<endl;
	   //else if(flagX>=1 && flagO>=1)
	   //     cout<<3<<endl;
	   //else if(flagX==1 || flagO==1)
	   //     cout<<1<<endl;
	   else if((countX>countO) && flagX==1 && flagO==0)
	        cout<<1<<endl;
	   else if((countX==countO)&& flagO==1 && flagX==0)
	        cout<<1<<endl;
	   else if(count_==0 && flagX==2)       
	        cout<<1<<endl;
	   //else if(flagX>=1 && flagO>=1)
	   //     cout<<"step 5:"<<3<<endl;
	   else if(count_==0 && flagO==0 && flagX==0 ) //draw
	        cout<<1<<endl;
	   else if(count_>0 && flagO==0 && flagX==0)   //moves remaining with no win
	        cout<<2<<endl;
	   else
	        cout<<3<<endl;
	}
	return 0;
}

