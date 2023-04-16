//	1
//	2 3
//	4 5 6
//	7 8 9 10
//	11 12 13 14 15
//	16 17 18 19 20 21

#include<iostream>
using namespace std;
int main(){

int rows,start=1; 
cout<<"Rows : "	;
cin>>rows;
for(int i=1;i<=rows;i++)
{
	for(int j=1;j<=i;j++)
	{
		cout<<start<<" ";
		++start;
	}
	cout<<endl;
}


cout<<"Pyramid"<<endl;


for(int i=1;i<=9;i++)
{
	
	for(int j=1;j<=9;j++)
	{
		
		if(i<=5){
			
			if(j>=6-i && j<=4+i){
				
			cout<<"*";
			
		}
		
		
		else{
			
			cout<<" ";
		}
		
		
		}
		if(i>5){
			
			if(j>=i-4 && j<=-i+14){
				
				cout<<"*";
			}
			
			else{
				
				cout<<" ";
				
			}
			
		}
	}
	
	cout<<endl;
	
}
return 0;
}

