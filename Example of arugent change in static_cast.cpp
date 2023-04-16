#include<iostream>
using namespace std;
int main(){
	int a=7;
//	char symbol=static_cast<char>(a);   // A conversion from higher to lower datatype....
//	cout<<symbol<<endl;					// A beep sound is given here
	float sym=static_cast<float>(a*3.24);	// A conversion from datatype lower to higher......  
	cout<<sym<<endl;					// NO any beep sound is produced here

    int x=12;
    char gen;
    gen=static_cast<char>(x);
    cout<<gen;
    {
    	int a=23;
    	char x='m';
    	cout<<"Charcater x is "<<x<<endl;
    	x=static_cast<char>(a);
    	cout<<"Charcater x is "<<x<<endl;
	}


return 0;
}

