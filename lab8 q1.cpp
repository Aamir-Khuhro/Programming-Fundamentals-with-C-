#include <iostream>
#include <string>
using namespace std;

struct Student
{
int id,phone;
char name[20],depart[40],email[40];

}Type[4];

int main()
{


    for(int i=0;i<5;i++)
        {
        cout<<"Enter ID:\t";cin>>Type[i].id;
        cin.ignore();
        cout<<"Enter Name:\t"; cin.getline(Type[i].name,20);
        cout<<"Enter Department:\t"; cin.getline(Type[i].depart,40);
        cout<<"Enter Email:\t"; cin.getline(Type[i].email,40);
        cout<<"Enter Phone Number:\t";cin>>Type[i].phone;

        }


for(int i=0;i<5;i++)
        {  cout<<"\n\n\nStudent"<<i+1<<" Data";
        cout<<"\nID"<<i+1<<" :\t"<<Type[i].id;
        cout<<"\nName"<<i+1<<" :\t"<<Type[i].name;
        cout<<"\nDepartment"<<i+1<<" :\t"<<Type[i].depart;
        cout<<"\nEmail"<<i+1<<" :\t"<<Type[i].email;
        cout<<"\nPhone Number"<<i+1<<" :\t"<<Type[i].phone;

        }





    return 0;
}
