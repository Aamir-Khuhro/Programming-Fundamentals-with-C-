#include<iostream>
using namespace std;
int main()
{
	int i,a,b;
	cin>>a;
	cout<<endl;
	cin>>b;
	 
	 for (i=a;i<=b;i++)
	   {
	   	 if (i==1)
	   	 {cout<<i<<" One"<<endl;
			}
	   	 if (i==2)
	   	 {cout<<i<<" Two"<<endl;
			}
	  	 if (i==3)
	   	 {cout<<i<<" Three"<<endl;
	    	}
	  	 if (i==4)
	   	 {cout<<i<<" Four"<<endl;
			}
		 if (i==5)
	   	 {cout<<i<<" Five"<<endl;
			}
	   	 if (i==6)
	   	 {cout<<i<<" Six"<<endl;
			}			
	   	 if (i==7)
	   	 {cout<<i<<" Seven"<<endl;
			}			
	   	 if (i==8)
	   	 {cout<<i<<" Eight"<<endl;
			}			
	   	 if (i==9)
	   	 {cout<<i<<" Nine"<<endl;
			}	
		if (i>9)			
	   	 {
			if (i%2==0)
	   	 {cout<<i<<" Even"<<endl;
			}	
	   	 else
	   	 {cout<<i<<" Odd"<<endl;
			}			
		}
	   }
	   
	 return 0;  
}
