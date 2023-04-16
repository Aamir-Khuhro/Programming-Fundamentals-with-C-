#include <string.h>
#include <iostream>
#include <sstream>
using namespace std;
char bullet=249;

struct Student
{
 string name;
 int id;
 int mark[3];
};

//functions declaration
void output_show(Student* ptr);
void inputStudent(Student* ptr);
//*********************** Main Function ************************//
int main (){
	Student stu; 					// instantiating an STUDENT object
	Student* stuPtr = &stu;			// defining a pointer for the object
	inputStudent(stuPtr); 			// inputting from the keyboard into the	instance
	output_show(stuPtr);			// printing the object
	
	
	
	
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
	
	//marks get with help of others things
	for(int i=0; i<3; i++){
		
		string mark_help;
		int get_marks=0;
		cout<<bullet<<"   Please enter a mark: ";
		getline(cin,mark_help);
		stringstream marks_converted(mark_help);
		marks_converted>>get_marks;
		ptr->mark[i]=get_marks;
	}
	
}


//*****************************Output giver function*********************************//
//**********************************************************************************//

void output_show(Student* ptr){
	cout<<bullet<<"   Name: "<<ptr->name<<endl;
	cout<<bullet<<"   ID: "<<ptr->id<<endl;
	for(int i=0; i<3; i++){
		cout<<bullet<<"   Mark "<<i<<": "<<ptr->mark[i]<<endl;
	}
}
