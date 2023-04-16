# include <iostream>
using namespace std;
int Calculator(int,char,int);  // function declaration     
                         
 int main()
 {
 	int value1 = 20, value2 = 10, res; 
 	char op;
 	
 	cin>>value1>>op>>value2;
 	
 	res=Calculator(value1,op,value2);
 	
 	cout<<"Result of " << op<<"  = "<<res<<endl;
 	
 	
 	return 0;	
 }
 
int Calculator(int no1, char oper, int no2)
{
	int r;
	
	if (oper == '+')
		r = no1+no2;
	else if (oper == '-')
		r = no1-no2;
	else if (oper == '*')
		r = no1*no2;
	else if (oper == '/')
		r = no1/no2;
	else if (oper == '%')
		r = no1%no2;


return  r;	
	
}
