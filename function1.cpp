# include <iostream>
using namespace std;
void Calculator(int);  // function declaration     
                         
 int main()
 {
 	int value1 = 10; 
 	cout<<"\n Main";
 	Calculator(value1);
 	cout<<"\n Back to Main";
	
 	return 0;	
 }
 
void Calculator(int no1)
{
cout<<"\n Function \n";
cout<<no1;
cout<<"\n End of Function \n";
	
	
}
