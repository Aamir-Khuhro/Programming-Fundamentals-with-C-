#include<iostream>
#include<process.h>
#include<iomanip>
// Just accesseble within the loop body.. 
// Single statement loop body...
// Multi-statement loop body...
using namespace std;
int main(){
int i;
char alph;
for(i=1, alph='A' ; i<6; i++, alph++){
	for(int j=1; j<=i;++j)
	cout<<alph<<" ";
	cout<<endl;
}
cout<<endl<<"----------------------------------------------------"<<endl;
{
	//Fibonnaci Series upto 100000
	int term, last=0, next=1, space=1;
	while(next<100000){
		cout<<setfill('-');
		cout<<setw(5)<<next<<((space%7 == 0) ? "\n" : " ");
		int sum=last+next;
		last=next;
		next=sum;
		space++;
	}
}

cout<<endl;







cout<<endl<<"----------------------------------------------------"<<endl;
{
	//Highest Divisor
	int largest=0;
	int num;
	cout<<"Enter number for factor highest factor in range [1,10]"<<endl;
	cin>>num;
	if(num>=2 && num<=1000)
	{
		for(int i=1;i<11;++i)
		if(num%i==0){
			if(i>=largest)
			largest=i;
		}
		cout<<largest<<endl;
	}
	else cout<<endl<<endl<<"Out of range number typed....";
}

cout<<endl<<"----------------------------------------------------"<<endl;







{
	//HCF of two numbers....
	
	
}




return 0;
}



