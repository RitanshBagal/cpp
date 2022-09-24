#include <iostream>
using namespace std;
class checkTriangle{
        public:
        int side1,side2,side3;
        void readCoordinates(){
        cin>>side1>>side2>>side3;
        }
    void isosceles(){
        if(side1==side2||side1==side3){
            cout<<"Can Form a ISOSCELES Triangle"<<endl;
        }
        else if(side2==side1||side2==side3){
            cout<<"Can Form a ISOSCELES Triangle"<<endl;
        }
        else if(side3==side1||side3==side2){
            cout<<"Can Form a ISOSCELES Triangle"<<endl;
        }
        else{
            cout<<"Cant Form a ISOSCELES Triangle"<<endl;
        }
    }
};
int main(){
    checkTriangle construct;
    construct.readCoordinates();
    construct.isosceles();
	return 0;
}