#include <iostream>
using namespace std;
int main()
{
	float Amount, Zakat;
	cout<<"Enter Your Annual Amount ";
	cin>>Amount;
	Zakat = (2.5/100)*Amount;
	cout<<"Your Zakat Amount Is "<<Zakat;
	return 0;
}
