#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int num1=13, num2=10,sum;
    
    //sum=num1+num2;     we can write also like this but this incresing the work load of main funtion by using different funtion 
    
    sum= add(num1,num2);  //num1,num2 adding a+b and sum using c
    
    cout<<"Sum is "<<sum;
    return 0;
}
