#include<iostream>
using namespace std;
int main(){
float F,C;
cout<<"Fahrenheit: ";
cin>>F;
C=5.0/9.0*F-160/9.0;
//C=5.0/9.0*F-160.0/9.0;  same result (At least one must have decimal, numerator or denominator)
cout<<F<<"F = "<<C<<"C"<<endl;


return 0;
}

