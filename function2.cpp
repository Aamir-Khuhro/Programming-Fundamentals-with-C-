# include <iostream>
using namespace std;
int Calculator(int,int);  // function declaration     
                         
 int main()
 {
 	int value1 = 20, value2 = 10, s; 
 	cin>>value1>>value2;
 	
 	s=Calculator(value1,value2);
 	
 	cout<<"Sum = "<<s<<endl;
 	
 	
 	return 0;	
 }
 
int Calculator(int no1, int no2)
{
	int sum;
	sum = no1+no2;


return  sum;	
	
}
