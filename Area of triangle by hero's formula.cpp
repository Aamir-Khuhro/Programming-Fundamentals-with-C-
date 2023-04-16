#include<iostream>
#include<cmath>
using namespace std;
int main(){
float s1,s2,s3;
cout<<"Enter 1st side of triangle: ";
cin>>s1;
cout<<"Enter 2nd side of triangle: ";
cin>>s2;
cout<<"Enter 3rd side of triangle: ";
cin>>s3;
float s=(s1+s2+s3)/2;
float area=s*(s-s1)*(s-s2)*(s-s3);
cout<<"The area of triangle is "<<sqrt(area)<<endl;


cout<<"-----------------------------------"<<endl;
{
float s1,s2,s3,area;
cout<<"Enter 1st side of triangle: ";
cin>>s1;
cout<<"Enter 2nd side of triangle: ";
cin>>s2;
cout<<"Enter 3rd side of triangle: ";
cin>>s3;
float s=(s1+s2+s3)/2;
area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
cout<<"The area of triangle is "<<area<<endl;

}


return 0;
}

