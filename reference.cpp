#include <iostream>
using namespace std;
int main(){
    int a = 26;
    int &r = a;  //r is a reference to a
    cout<<a<<endl<<r<<endl;
    int b = 47;
    r =b;    //value of b is stored in r but r is not a reference to b , b =a
    cout<<b<<endl<<r<<endl;
    cout<<a;  //value of a changes 
    return 0;
}