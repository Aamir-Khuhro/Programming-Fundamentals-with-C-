#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//	int a=1990;


cout<<setw(4)<<1990<<setw(7)<<135<<endl
	<<setw(4)<<1991<<setw(7)<<7290<<endl
	<<setw(4)<<1992<<setw(7)<<11300<<endl
	<<setw(4)<<1993<<setw(7)<< 16200<<endl;
	
	cout<<endl;
	
	int a=10;
	cout<<a<<endl;
	cout<<(a+=10)<<endl;
	cout<<--a<<endl;


return 0;
}

