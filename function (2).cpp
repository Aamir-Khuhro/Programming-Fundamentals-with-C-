# include <iostream>
using namespace std;
void Calculator();  // function declaration   
void Percent();  
                         
 int main()
 {
 	int in;
 	char check;
 	cout<<"\n Welcome to My Program";
 	do
 	{
	 
 		cout<<"\n Press 1 for calculator program";
 		cout<<"\n Press 2 for percentage program";
 		cin>>in;
 		if(in==1)
 			Calculator();
 		else
 			Percent();
 		cout<<"\n Do you want to continue (y/n)";
 		cin>>check;
 	}while(check == 'y');
 	return 0;	
 }
 
 void Calculator()    // function defination
	{
		
 	int no1,no2,rs;
	char op;
	
	cout<<"\n Enter no1 , no2 and op \n";
	cin>>no1>>no2>>op;
	
	switch(op)
	{
	case '+':
		rs = no1+no2;
		cout<<"Result of "<<op<<" is : "<<rs;
		break;
	case '-':
		rs = no1-no2;
		cout<<"\n Result of "<<op<<" is : "<<rs;
		break;
	case '*':
		rs = no1*no2;
		cout<<"\n Result of "<<op<<" is : "<<rs;
		break;
	case '/':
		rs = no1/no2;
		cout<<"\n Result of "<<op<<" is : "<<rs;
		break;
	case '%':
		rs = no1%no2;
		cout<<"\n Result of "<<op<<" is : "<<rs;
		break;
	default:
		cout<<"\n Invalid operator";
	}
	
    
}


void Percent()
{
	int perc = 65;
	
	cin>>perc;
	
	if(perc < 50)
	{
		cout<<"\n Fail";
	}
	else
	{
		if(perc >=50)
		{
			if(perc<60)
			{
				cout<<"C";
			}
			else
			{
				if(perc < 70)
				{
					cout<<"\n B";
				}
				else
				{
					cout<<"A";
				}
			}
		}
	}
	
}
 
