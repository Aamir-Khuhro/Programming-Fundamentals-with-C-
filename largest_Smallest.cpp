#include<iostream>
using namespace std;
int main(){
	int marks[4]={34,23,67,4};
	int largest=marks[0];
	int smallest=marks[0];
	for(int i=0;i<4;i++){
		
		if(marks[i]>largest){
			largest=marks[i];
		}
		if(marks[i]<smallest){
			smallest=marks[i];
		}
	}
	cout<<"Smallest marks: "<<smallest<<endl;
	cout<<"largest marks: "<<largest<<endl;
	return 0;
}
