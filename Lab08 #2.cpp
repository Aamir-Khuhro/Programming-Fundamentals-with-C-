#include<iostream>
using namespace std;
struct Product{
	string name;
	int model;
	float price;
}p[10];
void display(Product);
int main(){
	for(int i=0;i<10;i++)
	{
		cout<<"PRODUCT "<<i+1<<endl;
		cout<<"Name: ";
		getline(cin,p[i].name);
		if(p[i].name=="quit")
		break;
		cout<<"Model: ";
		cin>>p[i].model;
		cout<<"Price: ";
		cin>>p[i].price;
		cin.ignore();
		cout<<"***************************************\n";
	}
	cout<<"PRODUCT DETAILS"<<endl;
	display(p[10]);     //If I enable this is one it's showing  "return 1 id exit";
	return 0;
}
void display(Product q[10]){
	for(int i=0;i<10;i++)
	{
		cout<<"Name: "<<q[i].name<<endl;
		cout<<"Model: "<<q[i].model<<endl;
		cout<<"Price: "<<q[i].price<<endl;
	}
}

