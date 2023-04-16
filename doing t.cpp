#include<iostream>
#include<string>
using namespace std;
struct Product{
	string name;
	int model;
	float price;
};
void display(Product p[10]){
	for(int i=0;i<10;i++)
	{
		cout<<"Name: "<<p[i].name<<endl;
	}
}
int main(){
	Product p[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Recorde"<<i+1<<endl;
		cout<<"Name: ";
		getline(cin,p[i].name);
		if(p[i].name=="quit") 
		break;
		cout<<"Model: ";
		cin>>p[i].model;
		cout<<"Price: ";
		cin>>p[i].model;
		cin.ignore();
	}
	
	dispaly(p);
	return 0;
}
