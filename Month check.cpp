#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter month number : ";
cin>>num;
switch(num){
	case 12 :  //NO relational operator can be used here....
		cout<<"Dec";
		break;
	case 11 :
		cout<<"Nov";
		break;
	case 10 :
		cout<<"Oct";
		break;
	case 9 :
		cout<<"Sep";
		break;
	case 8 :
		cout<<"Aug";
		break;
	case 7 :
		cout<<"Jul";
		break;
	case 6 :
		cout<<"Jun";
		break;
	case 5 :
		cout<<"May";
		break;
	case 4 :
		cout<<"Apr";
		break;
	case 3 :
		cout<<"Mar";
		break;
	case 2 :
		cout<<"Feb";
		break;
	case 1 :
		cout<<"Jan";
		break;
	default:
		cout<<"Invlaid month number..";
}

/// Conditional Operator ..(Ternary operator)

return 0;
}

