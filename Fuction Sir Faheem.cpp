#include<iostream>
using namespace std;
void Calculator();
void Percentage();
int main(){
	int no1;
	char opt;
	
	do{
		cout<<"Enter 1 for Calculator and 2 for Percentage: ";
		cin>>no1;
		if(no1==1){
			Calculator();
		}
		else{
			Percentage();
		}

		cout<<"Do you want to continue(y/n)?\n ";
		cin>>opt;
	}
	while(opt=='y');
	return 0;
}
void Calculator(){
	int no1,no2,rs;
	char op,opt;
	cout<<"Enter two numbers: ";
	cin>>no1>>no2;
	cout<<endl;
	cout<<"Enter operation: ";
	cin>>op;
	switch(op){
		case '+':
		rs=no1+no2;
		cout<<"The result of "<<op<<" is "<<rs<<endl;
		break;
		case '*':
		rs=no1*no2;
		cout<<"The result of "<<op<<" is "<<rs<<endl;
		break;
		case '-':
		rs=no1-no2;
		cout<<"The result of "<<op<<" is "<<rs<<endl;
		break;
		case '/':
		rs=no1/no2;
		cout<<"The result of "<<op<<" is "<<rs<<endl;
		break;
		case '%':
		rs=no1%no2;
		cout<<"The result of "<<op<<" is "<<rs<<endl;
		break;
		default:
			cout<<"Invlid operation";
	}
	
}
void Percentage(){
	int per=65;
	cout<<"Enter your percentage: ";
	cin>>per;
	if(per<60){
		cout<<"Fail\n";
	}
	else{
		if(per>=93){
			cout<<"A+\n";
		}
		else{
			if(per>=87){
				cout<<"A-\n";
			}
			else{
				if(per>=78){
					cout<<"B+\n";
				}
				else{
					if(per>=72){
						cout<<"B-\n";
					}
					else{
						if(per>=68){
							cout<<"C+\n";
						}
						else{
							if(per>=60){
								cout<<"C-\n";
							}
						}
					}
				}
			}
		}
	}
}





