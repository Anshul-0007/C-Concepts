#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;              // i want to take input from user
    cout<<"enter size";
    cin>>n;
    //int A[n]= {2,3,45,6,7,5};   //we can not declare size of variable like this
    
    int A[n];
    A[0]=2;
    
    
    //if we have array of some size and initilize few values in array then rest of values having zero
    
    /*A[0]=2;
    A[1]=3;
    A[2]=4;
    A[3]=5;
    */
    //cout<<sizeof(A)<<endl;    // for size, multiply size*4
    //cout<<A[8]<<endl;
    //printf("%d\n",A[9]);
    
    //for display an array we use for loop
    
    /*for(int i =0; i<10; i++)
    {
        cout<<A[i]<<endl;
    }*/
    
    //in c++ there is other method for accessing an array by using fro each loop
    
    for(int x : A)
    {
        cout << x <<endl;
    }
    
    return 0;
}
