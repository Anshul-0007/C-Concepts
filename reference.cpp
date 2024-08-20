#include <iostream>
using namespace std;

int main(){
    int a=3442;
    int &r=a;
    
    int b=24;
    r=b;
    
    cout<<a<<endl;
    cout<<r<<endl;
    
    return 0;
}
