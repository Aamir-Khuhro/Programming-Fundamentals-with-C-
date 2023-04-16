#include <iostream>
using namespace std;
void empSalary(void);
void display(void);
//void display(empSalary);
struct Employee{
double basic_pay,ma,ha,grsal,tax,net_sal;
char name[30];
int emp_no;}emp1;
int main()
{
    empSalary();
    display();
    return 0;
}
void empSalary(void)
{   cout<<"Enter Employee Number:";cin>>emp1.emp_no;
 cin.ignore();
cout<<"Employee Name:";
cin.getline(emp1.name,30);
cout<<"Basic Pay:";
 cin>>emp1.basic_pay;
    //float ha,ma,grsal,tax,net_sal;
    emp1.ha=(emp1.basic_pay/100)*10;
    emp1.ma=(emp1.basic_pay/100)*5;
    emp1.tax=(emp1.basic_pay/100)*4;
    emp1.grsal=emp1.basic_pay+emp1.ma+emp1.ha;
    emp1.net_sal=emp1.grsal-emp1.tax;
}
void display(void)
{
cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n";
cout<<"\n\tEmployee Salary Detail\n";
cout<<"\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n";
    cout<<"\nEmployee Number:\t"<<emp1.emp_no;
    cout<<"\nEmployee Name:\t\t"<<emp1.name;
    cout<<"\nBasic Salary:\t\t"<<emp1.basic_pay;
    cout<<"\nHouse Allowance:\t"<<emp1.ha;
    cout<<"\nMedical Allowance:\t"<<emp1.ma;
    cout<<"\nGross Salary:\t\t"<<emp1.grsal;
    cout<<"\nTax Deduction:\t\t"<<emp1.tax;
    cout<<"\nNet Salary:\t\t"<<emp1.net_sal<<endl<<endl;
}
