#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout<<fixed<<setprecision(2);
unsigned int id;
string name;
double units,bill,charge,net;
cin>>id;
cin>>name;
cin>>units;
	cout<<"Customer IDNO :" <<id<<endl;
	cout<<"Customer Name :" <<name<<endl;
	cout<<"Units Consumed :"<<units<<endl;
	if(units>=0 && units<=199){
		bill=units*1.20;
		if(bill>=100) cout<<"Amount Charges @Rs. 1.20 per unit : "<<bill<<endl;
	}
	else if(units>199 && units<400){
		bill=units*1.50;
		if(bill>=100) cout<<"Amount Charges @Rs. 1.50 per unit : "<<bill<<endl;
	}
	else if(units>=400 && units<600){
		bill=units*1.80;
		if(bill>=100) cout<<"Amount Charges @Rs. 1.80 per unit : "<<bill<<endl;
	}
	else if(units>=600){
		bill=units*2.00;
		if(bill>=100) cout<<"Amount Charges @Rs. 2.00 per unit : "<<bill<<endl;
	}
	else{
		cout<<"Invalid units entered..."<<endl;
	}
	if(bill>400){
		charge=bill*0.15;
		cout<<"Surcharge Amount : "<<charge<<endl;
		net=bill+charge;
		cout<<"Net Amount Paid By the Customer : "<<net<<endl;
	}

//
//else{
//	cout<<"Net Amount Paid By the Customer : "<<bill<<endl;
//}

return 0;
}

