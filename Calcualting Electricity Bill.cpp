#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int id;
	string name;
	float units,amount;
	cin>>id;
	cout<<endl;
	cin>>name;
	cout<<endl;
	cin>>units;
	cout<<endl;
	cout<<"***************************"<<endl;
	cout<<"Customer ID NO: "<<id<<endl;
	cout<<"Customer Name: "<<name<<endl;
	cout<<"Units Consumed: "<<units<<endl;
	if(units>=0 && units<200){
		amount=units*1.20;
		cout<<"Amount Charges @1.20 per unit: "<<fixed<<setprecision(2)<<amount<<endl;
	}
	else if(units>=200 && units<400){
		amount=units*1.50;
		cout<<"Amount Charges @1.50 per unit: "<<fixed<<setprecision(2)<<amount<<endl;
	}
	else if(units>=400 && units<600){
		amount=units*1.80;
		cout<<"Amount Charges @1.80 per unit: "<<fixed<<setprecision(2)<<amount<<endl;
	}
	else if(units>=600){
		amount=units*2.0;
		cout<<"Amount Charges @2.0 per unit: "<<fixed<<setprecision(2)<<amount<<endl;
	}
	if(amount>400){
		cout<<"Surcharge Amount: "<<fixed<<setprecision(2)<<amount*0.15<<endl;
		cout<<"Net Amount Paid by the Customer: "<<amount*1.15<<endl;
		cout<<"***************************"<<endl;
	}
	return 0;
}
