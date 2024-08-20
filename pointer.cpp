#include <iostream>
using namespace std;

int main(){
    
    /*int a=10;
    int *p;
    p=&a;   
    
    cout<<a<<endl;
    printf("using pointer %d",*p);
    */

                                       //using dyanmic memory allocation
  
  /*  int*p;
    //p=(int *)malloc(6*sizeof(int));      
    p=new int[6];
    p[0]=23; p[1]=34; p[2]=12; p[3]=56; p[4]=33; p[5]=55;
    
    for(int i=0; i<6;i++)
        cout<<p[i]<<endl;
    
    //delete []p;
    free(p);    */
    
    struct Rectangle
    {
        int length;
        int breadth;
    };
    
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    
    //whatever the data type is pointer will take same amount of memory
     
    return 0;
}
