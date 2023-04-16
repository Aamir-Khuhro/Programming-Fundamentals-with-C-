#include <iostream>
using namespace std;
int main (){
     
    float a,b;
    double max,min;
    
    int k=0;
    
    cout<<"How many numbers do you have : ";
    cin>>a;
    
    if(a<0){
    	cout<<"Sorry, you have entered an invalid input.\nThank You.";
	}
	
	else if (a==0){
		cout<<"Opps, you don't have any number for me to process.\nThank You.";
	}
	
	else{
		for(int i=1; i<=a; i++)
		    {
			cout<<"Enter Number "<<i<<": ";
			cin>>b;	
			
			if (k<1)
			  {
			  	min=b;
			  	max=b;
			  	k++;
			  }
			  
			if(b<min)
			  {
			  	min=b;
			  }
			  
			else if(b>max)
			  {
			  	max=b;
			  }  
	        }
	        
	        cout<<"The lowest number is : "<<min<<endl;
	        cout<<"The highest number is : "<<max<<endl;
	        cout<<"Thank you.";
        }
        
    return 0;
}

