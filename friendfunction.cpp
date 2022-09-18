#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;

    public:
    int rectangle(){
        length = 10;
    }
    friend int printLength(Rectangle);
};
int printLength(Rectangle b){
    b.length +=10;
    return b.length;
}
int main(){
    Rectangle b;
    cout<<"Length of rectangle : "<<printLength(b)<<endl;
    return 0;
}