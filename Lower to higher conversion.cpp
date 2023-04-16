#include<iostream>
using namespace std;
int main(){
// We can convert a higher datatype to lower but we can't store a higher datatype in lower
// A temporary variable type of higher type is assigned to lower one
// It increases the size or range by type casting for the time being 
// But in actual the variable is the same datatype as it was
int a=4;
char b='m';
float c=a+b;
cout<<"Sum of charecter  \v and integer  = "<<c*2.23<<endl;  

char sex='f';
cout<<static_cast<int>(++sex)<<endl;
cout<<&sex<<endl;
cout<<&a<<endl;

cout<<"Hello My name is Aamir Ali \r and my firend \"Majid Ali\" is a good guy....";



{
int a=34;
int b='m';
float c=a+b;
cout<<c<<endl;
}


{
	int a=1500000000;  
	a=(a*10)/10;      //result too large of intermediate operation
	cout<<"a = "<<a<<endl;   //Wrong answer
	
	a=1500000000;    //cast to double 
	a=(static_cast<double>(a)*10)/10;  
	cout<<"a = "<<a<<endl; 				//right answer
}


{
	int a=1500000000;  
	a=(a*10)/10;      //result too large of intermediate operation
	cout<<"a = "<<a<<endl;   //Wrong answer
	
	a=1500000000;    //cast to double 
	a=(static_cast<float>(a)*10)/10;  
	cout<<"a = "<<a/5000*2.3<<endl; 				//right answer
}
return 0;
}

