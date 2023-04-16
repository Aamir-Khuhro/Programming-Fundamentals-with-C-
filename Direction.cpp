/*

Write a program in c++ which asks the user to
enter direction [East(e), West(w), North(n), South(s)]. 
The initital position of person is at Point (10,10)
in cartesian plane. Criteria is :
* * * * * * * * *
* South * Down  *
* North * Up    *
* West  * Right *
* East  * Left  *
* * * * * * * * *
The move is one unit at a time in any direction. Prompt the
user to enter direction and tell new position.

*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
int x = 10, y = 10;

char dir = 'a';

while((dir=getche())!='\r'){
	
	if(dir == 'e')
		x--;
			else
				if(dir == 'w')	
					x++;
						else
							if(dir == 'n')
								y++;
									else
									 	if(dir == 's')
									 	   y--;
	
	cout<<endl;
									 	   
	cout<<"Your Current positin is ("<<x<<", "<<y<<").\n"<<endl;
	
	cout<<"Press Return to exit program....\n"<<endl;
	
	cout<<"Enter direction (e,w,n,s) : ";
	
}

	

return 0;
}

