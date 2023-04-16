#include <iostream>
using namespace std;
int main()
{
	float initial, acceleration;
	float final = 0;
	cout<<"Enter Initial Velocity = ";
	cin>>initial;
	cout<<"Enter Acceleration = ";
	cin>>acceleration;
	final = initial+acceleration;
	cout<<"Final Velocity = "<<final<<"m/s";
	return 0;
}
