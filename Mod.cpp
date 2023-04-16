#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter any 5 digit number";
	cin>>x;
	cout<<x%10<<endl;
	cout<<(x%100)/10<<endl;
	cout<<(x%1000)/100<<endl;
	cout<<(x%10000)/1000<<endl;
	cout<<(x%100000)/10000<<endl;
}
