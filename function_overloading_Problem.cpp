#include<iostream>
using namespace std;
int myfunc(double);
int myfunc(float);
int main()
{
	cout << myfunc(3.51) << "\n";
	return 0;
}

int myfunc(double n){
	return n * 2.0;
     }
int myfunc(float n){
	return n * 3.0;
}

