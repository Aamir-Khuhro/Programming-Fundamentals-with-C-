#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int num;
cout<<"Single digit number: ";
cin>>num;
cout<<setw(4)<<num<<" "<<num<<" "<<num<<" "<<num<<endl
	<<setw(4)<<num<<"     "<<num<<endl
	<<setw(4)<<num<<"     "<<num<<endl
	<<setw(4)<<num<<"     "<<num<<endl
	<<setw(4)<<num<<"     "<<num<<endl
	<<setw(4)<<num<<" "<<num<<" "<<num<<" "<<num<<endl;
	
	
	{
cout<<"Single digit number: ";
cin>>num;
cout<<num<<" "<<num<<" "<<num<<" "<<num<<endl
	<<num<<"     "<<num<<endl
	<<num<<"     "<<num<<endl
	<<num<<"     "<<num<<endl
	<<num<<"     "<<num<<endl
	<<num<<" "<<num<<" "<<num<<" "<<num<<endl;
	}

return 0;
}

