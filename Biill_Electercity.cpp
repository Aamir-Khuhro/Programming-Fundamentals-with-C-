#include<iostream>
using namespace std;
int main(){
	int id;
	string name;
	float units;
	cout<<"ID: ";
	cin>>id;
	cout<<"\nName: ";
	getline(cin,name);
	cout<<"\nUnits Consumed: ";
	cin>>units;
	return 0;
	
	
  /*
  		this is misbehaving and showing logical errors.. What is the reason..
  		The reason is this that I have not included the <string> directive .. preprocessro
  		..Object... Header ...
  		String fuction libarary
  */
}
