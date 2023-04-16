//This is "Plastic CodeRape" theme of Dev C++
//*** Wrong Syntax or error indication
/*
	The base address of the arrays means from what address does the array starts
	 or Memory location of the first array component
	And that is the address of the first element of the array  (for 1D arrays)...   array_Identifire[0]    ..
	In order to know the base address use it: cout<<array_Identifire;   //The base address is stored in the name of array
	The address is in hexa-decimal form 
	Each element of the arrray of "int" data type ..... occupies 4 bytes of memory ..
	The address to each element of array are assigned like this...   0x22fe30, 0x22fe34, 0x22fe38, ...
*/



#include<iostream>
using namespace std;
int main(){
	
//	   <---Some restrictions on arrays--->
int s1[]={3,5,6,6};
cout<<s1;    //This statement is used for printing the base address of the array
cout<<endl;
//****     int s2[];      ||||| IN s1[], size must be mentioned  ...... 
//****     s2[]=[3,3,4,5];      /// Assignment not possible in arrays 
//****     cout<<s2[3];
//****     s2[4]=s1[];   ||||| IN s1[], size must be mentioned

int s2[4];			
s2[4]=s1[4];         		 // Out of range .. This will make overflow ... bcz there is no element present with index 4.... 
cout<<s2[2]<<endl<<endl;     //Would'nt give desired results due to above line of code...		
//****     cin>>s2;        //This only works in char type arrays  e.g   char s2[4];  cin>>s2; so this will surley work
int a1[]={534,534,74,22,6};
int a2[5];
//****     a2=a1;   || Invlalid array assignment
// we can assign values by using seperate assignment for each element... 
//Other way is ti use loops
a1[2]=a2[3];   //Garbage data is stored in a1[2] element, most of the times 0 but not always ...
cout<<a1[2];   
cout<<endl;
a2[2]=a1[3];   //This will work work..... We have specified and defined values for array a1....
cout<<a2[2];   
cout<<endl;
//	   <---Assigning values to other array--->
int s3[]={3,5,43,6,34,634};
int s4[6];
for(int i=0;i<6;i++){
	s4[i]=s3[i];
	
	
}
//    Printing the values copied to s4
for (int i=0;i<6;i++){
	cout<<s4[i]<<" ";
}








}
