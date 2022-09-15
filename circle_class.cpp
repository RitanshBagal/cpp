#include <iostream>
using namespace std;
class circle{
    public:
    int radius;
    
    void perimeter(){
        float p = 2*3.14*radius;
        cout<<"The perimeter is "<<p<<endl;
    }
    void area();
};
void circle::area(){
    float a = 3.14*radius*radius;
    cout<<"The area of the circle is: "<<a<<endl;
}
int main(){
    circle c1;
    c1.radius = 4;
    c1.area();
    c1.perimeter();
    return 0;
}