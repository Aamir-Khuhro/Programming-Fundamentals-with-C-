#include<iostream>
#include<string>
using namespace std;
int main(){
	float units,amount,surcharge;
	int id;
	string name;
	cout<<"ID: ";
	cin>>id;
	cout<<"Name: ";
	cin>>name;
	cout<<"Units Consumed: ";
	cin>>units;
	cout<<"********************************************"<<endl;
	cout<<"Customer ID NO: "<<id<<endl;
	cout<<"Customer Name: "<<name<<endl;
	cout<<"Units Consumed: "<<units<<endl;
	if(units>=0 && units<200){
		amount=units*1.20;
		cout<<"Amount Charges @1.20 per unit: "<<amount<<endl;
	}
	else if(units>=200 && units<400){
		amount=units*1.50;
		cout<<"Amount Charges @1.50 per unit: "<<amount<<endl;
	}
	else if(units>=400 && units<600){
		amount=units*1.80;
		cout<<"Amount Charges @1.80 per unit: "<<amount<<endl;
	
	}
	else if(units>=600){
		amount=units*2.00;
		cout<<"Amount Charges @2.00 per unit: "<<amount<<endl;
	}
	else{
		cout<<"Invalid Units entered...";
	}
	if(amount>400){
		cout<<"Surahcarge Amount: "<<amount*0.15<<endl;
		cout<<"Net Amount Paid by the Custsomer: "<<amount*1.15<<endl;
	}
	cout<<"**********************************************"<<endl;	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
  /*
  		this is misbehaving and showing logical errors.. What is the reason..
  		The reason is this that I have not included the <string> directive .. preprocessro
  		..Object... Header ...
  		String fuction libarary
  		NO that is not the reason.. The sole reason I think is data Types. That I'm using
  */
}
