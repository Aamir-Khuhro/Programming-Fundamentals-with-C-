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
	if(no1<no2 && no2<no3 && no3<no4){  
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;   //1234
	}
	else if(no1<no3 && no3<no2 && no2<no4){
		cout<<no1<<" "<<no3<<" "<<no2<<" "<<no4;   //1324
	}
	else if(no2<no1 && no1<no3 && no3<no4){
		cout<<no2<<" "<<no1<<" "<<no3<<" "<<no4;   //2134
	}
	else if(no1<no4 && no4<no3 && no3<no2){
		cout<<no1<<" "<<no4<<" "<<no3<<" "<<no2;   //1432
	}
	else if(no1<no4 && no4<no2 && no2<no3){
		cout<<no1<<" "<<no4<<" "<<no2<<" "<<no3;   //1423
	}
	else if(no1<no3 && no3<no4 && no4<no3){  
		cout<<no1<<" "<<no3<<" "<<no4<<" "<<no2;   //1342
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}
	else if(no1<no2 && no2<no3 && no3<no4){
		cout<<no1<<" "<<no2<<" "<<no3<<" "<<no4;
	}

	return 0;
}
