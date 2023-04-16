#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
int side;
cout<<"Enter side of equilateral triangle : ";
cin>>side;
float area=sqrt(3)/4*(side*side);
cout<<"Area of Equilateral Triangle is : "<<area<<endl;

{	
	cout<<"Celsius to Fahrenheit Converter"<<endl;
	cout<<"Celsius: ";
	float C;
	cin>>C;
	float F=9.0/5.0*C+32;
	cout<<C<<" Celsius = "<<F<<" Fahrenheit"<<endl;

}
cout<<"Celsius to Fahrenheit Converter"<<endl;
cout<<"Celsius: ";
float C;
cin>>C;
float F=9/5*C+32;
cout<<C<<" Celsius = "<<F<<" Fahrenheit"<<endl;

cout<<"--------------------------------\n";
{	
	cout<<fixed<<setprecision(1);
	cout<<"Celsius to Fahrenheit Converter"<<endl;
	cout<<"Celsius: ";
	float C;
	cin>>C;
	float F=9/5*C+32;
	cout<<C<<" Celsius = "<<F<<" Fahrenheit"<<endl;

}


cout<<"--------------------------------\n";
{	
	cout<<fixed<<setprecision(1);
	cout<<"Celsius to Fahrenheit Converter"<<endl;
	cout<<"Celsius: ";
	float C;
	cin>>C;
	float F=9.0/5.0*C+32;
	cout<<C<<" Celsius = "<<F<<" Fahrenheit"<<endl;

}




cout<<"--------------------------------\n";
{	
	cout<<"Celsius to Fahrenheit Converter"<<endl;
	cout<<"Celsius: ";
	float C;
	cin>>C;
	float F=9.0/5.0*C+32;
	cout<<C<<" Celsius = "<<F<<" Fahrenheit"<<endl;

}
// Still this showing the decimal (precision)  so it
// means the precsion set befoere it affecting it
// Therefore i'm putting it at the beggining
return 0;
}

