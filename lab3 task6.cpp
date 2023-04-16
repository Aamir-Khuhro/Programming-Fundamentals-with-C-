#include <iostream>
using namespace std;
int main()
{
	float distance, time;
	float speed = 0;
	cout<<"Enter The Value Distane ";
	cin>>distance;
	cout<<"Enter The Value Of Time "; 
	cin>>time;
	speed = distance/time;
	cout<<"Speed = "<<speed<<"m/s";
	return 0;
}
