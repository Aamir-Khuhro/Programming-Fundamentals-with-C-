#include<iostream>
using namespace std;
int main(){
	float no1,no2,no3,no4;
	cout<<"NO 1: ";
	cin>>no1;
	cout<<"NO 2: ";
	cin>>no2;
	cout<<"NO 3: ";
	cin>>no3;
	cout<<"NO 4: ";
	cin>>no4;	
	if(no1>no2){
		if(no3>no4){
			cout<<no4<<" "<<no3<<" "<<no2<<" "<<no1;
		}
		else{
			cout<<no4<<" "<<no3<<" "<<no2<<" "<<no1;
		}
	}
	return 0;
}
