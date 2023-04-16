#include <iostream>
using namespace std;
int main()
{
    int arr[10],*ptr,count=0,odd=0;
    ptr=arr;
//Random values generator
    for(int i=1;i<=10;i++)
    {
        ptr[i-1]=i;
    }
//sum of all numbers
    for(int i=0;i<9;i++)
    {
       count+=ptr[i];
    }
//sum of odd numbers
    for(int i=0;i<9;i++)
    {
        if(ptr[i]%2!=0)
        {
            odd+=ptr[i];
        }
    }

cout<<"Total Sum of Numbers divided by 2 is:\t "<<count-odd<<endl<<endl;
    return 0;
}
