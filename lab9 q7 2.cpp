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
};

//functions declaration
void output_show(Student* ptr);
void inputStudent(Student* ptr);
//*********************** Main Function ************************//
int main (){
	Student stu;					// instantiating an STUDENT object
	Student* stuPtr = &stu;	
	int h_m;		// defining a pointer for the object
	cout<<"How many students in the Class: ";
	cin>>h_m;
	stuPtr=new Student[h_m];
	
	for(int i=0; i<h_m; i++){
		inputStudent(&stuPtr[i]); 
	}		// inputting from the keyboard into the	instance


	for(int i=0; i<h_m; i++){
		output_show(&stuPtr[i]); 
	}

		delete stuPtr;	

	
	


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
	cout<<bullet<<"   Mark "<<": "<<ptr->mark<<endl;
}
