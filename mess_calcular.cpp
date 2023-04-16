#include<iostream>
using namespace std;
int main(){
	cout<<"\"MESS CALCULATOR\"\n";
	int bill, dail_unit, mon_units;
	cout<<"Units per day ";
	cin>>dail_unit;
	mon_units=30*dail_unit;
	bill=20*mon_units+500;
	cout<<"Your Bill is "<<bill<<" ruprees";
	return 0;
}
