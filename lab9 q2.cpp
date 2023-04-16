#include <iostream>
using namespace std;
typedef int* intptr;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    intptr p1,p2;
    p1=&arr[3];
    p2=&arr[7];
    for (int i=1;p1<=p2;i++)
        {cout<<*p1-1;
    p1++;}







    return 0;
}
