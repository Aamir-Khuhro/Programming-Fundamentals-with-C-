#include <iostream>
using namespace std;
int main()
{
	int a, b, x;
	cout<<"Finding The Value Of X \n";
	cout<<"Enter the value of A ";
	cin>>a;
	cout<<"Enter the value of B ";
	cin>>b;
	x = 2*(a + b) - 2*(a*b);
	cout<<"Value Of X = "<<x;
	return 0;
}
