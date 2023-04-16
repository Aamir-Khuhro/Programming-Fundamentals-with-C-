#include<iostream>
using namespace std;
int main(){
	int choice;
	
	do
	{
	cout<<"Choose 1 to see the next homework assignment."<<endl;
	cout<<"Choose 2 for your grade on the last assignment."<<endl;
	cout<<"Choose 3 for assignment hints."<<endl;
	cout<<"Choose 4 for to exit this program."<<endl;
	cout<<"Enter your choice and press return.";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"The next homewoerk assignment is Mathematics."<<endl;
			break;
		case 2:
			cout<<"Grade in last assignment is \"B\" "<<endl;
			break;
		case 3:
			cout<<"Make first algorithm of the problem on the paper then implement on IDE."<<endl;
			break;
	}
	}
	while(choice!=4);
	cout<<"End of the program."<<endl;
	return 0;
}
