#include<iostream>
using namespace std;
int main(){
class Car {
	private: 
		int id;
		string color;
		string company;
		int model;
		float price;
	public: 
		void GetData(int a, string b, string c, int d, float p){
			id=a;
			color=b;
			company=c;
			model=d;
			price=p;
		}
		void display(){
			cout<<"Car Info\n";
			cout<<"ID      : "<<id<<endl;
			cout<<"Color   : "<<color<<endl;
			cout<<"Company : "<<company<<endl;
			cout<<"Model   : "<<model<<endl;
			cout<<"Price   : "<<price<<endl;
		}
};
Car c1;
c1.GetData(5432,"Black","Culutus",2021,9999999.99);
c1.display();

return 0;
}

