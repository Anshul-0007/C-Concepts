#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
   /* Rectangle r={10,5};          //for noraml variable use (.) oerator
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    Rectangle *p=&r;             // for pointer pointing to struture use -> arrow
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    */
    
    // creating boject an rectangle in heap
    
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    //p=new Rectangle;       in c++
    
    p->length=17;
    p->breadth=12;
    
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}
