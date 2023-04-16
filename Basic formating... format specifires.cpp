#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double pi=3.14159265;
cout<<fixed<<setprecision(4);
cout<<"The value of Pi : "<<pi<<endl<<endl;
cout<<"Value of pi with width 8   : |"<<setw(8)<<pi<<"|"<<endl;
cout<<"Value of pi with width 10   : |"<<setw(10)<<pi<<"|"<<endl;

cout<<setfill('-'); // setfill() sets to fill the blanks with specified character  in setw()
cout<<"----------------------------------"<<endl;
cout<<"   Aamir Ali    "<<endl;
cout<<"----------------------------------"<<endl;
cout<<"Value of pi with width 8   : |"<<setw(8)<<pi<<"|"<<endl;
cout<<"Value of pi with width 10   : |"<<setw(10)<<pi<<"|"<<endl;

cout<<"----------------------------------"<<endl;
cout<<scientific; //set value in scientic format with exponent
cout<<"The value of Pi in scientific notation is : "<< pi << endl;
cout<<"----------------------------------"<<endl;
bool done=false;
cout<<" Status in number : "<<done<<endl;
cout<<boolalpha;  // set output in alphabet true or false 
cout<<" Status in alphabet: "<<done<<endl;



return 0;
}

