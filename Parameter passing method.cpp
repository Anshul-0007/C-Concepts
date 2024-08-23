#include <iostream>
using namespace std;

int add(int a, int b)               //foraml parametter
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int num1=10,num2=12,sum;        //actual parametter
    
    sum=add(num1,num2);
    
    cout<<"sum is "<<sum;
    
    return 0;
} 
