#include <string.h>
#include <iostream>
#include <sstream>
using namespace std;
char bullet=249;

struct Student
{
 string name;
 int id;
 int mark;
}stu;

//functions declaration
void output_show(Student* ptr);
void inputStudent(Student* ptr);
//*********************** Main Function ************************//
int main (){					// instantiating an STUDENT object
	Student* stuPtr = &stu;	
	int h_m;		// defining a pointer for the object
	cout<<"How many Students in class: ";
	cin>>h_m;
	stuptr=new int[h_m];
	for(int i=0; i<h_m; i++){
			inputStudent(stuPtr, h_m); 				// inputting from the keyboard into the	instance
			output_show(stuPtr, h_m);

	}

	delete stu.mark;




		 							// printing the object
 return 0;
} // end main



//*****************************input giver function*********************************//
//**********************************************************************************//

void inputStudent(Student* ptr){ // function prototype for inputting
	cout<<bullet<<"   Please enter a Name: ";
	cin>>ptr->name;
	cout<<bullet<<"   Please enter an id: ";
	cin>>ptr->id;
	cin.ignore();
	cout<<bullet<<"   Please enter a mark: ";
	cin>>ptr->mark;

	//delete chk;
	
}


//*****************************Output giver function*********************************//
//**********************************************************************************//

void output_show(Student* ptr){
	cout<<bullet<<"   Name: "<<ptr->name<<endl;
	cout<<bullet<<"   ID: "<<ptr->id<<endl;
	cout<<bullet<<"   Marks:"<<ptr->mark<<endl;
}
