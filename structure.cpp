#include <iostream>
using namespace std;

struct Rectangle
{
    int length;              // taking 4 bytes
    int breadth;            //taking 4 bytes
    char x;         //taking only 1 bytes but it take 4 bytes but consider as 1 
};

//we can declare a variable here like this before main funtion
/*struct Rectangle
{
    int length;
    int breadth;
    char x;
} r1,r2,r3;

 struct Rectangle r1={10,4};
*/

int main()
{
    struct Rectangle r1={10,4};
    
    //accessing the member
    r1.length=15;
    r1.breadth=34;
    
    //Displaying
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;
    
}
