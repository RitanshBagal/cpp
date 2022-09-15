#include <iostream>
using namespace std;
class factorial{
    public:
    int n1,n,f=1;
    void input();
    void fact();
    void display();
};
void factorial::input(){
    cout<<"Enter Any Number"<<endl;
    cin>>n;
}
void factorial::fact(){
    n1 = n;
    if(n==0||n==1){
        cout<<"The factorial of "<<n<<" is "<<1<<endl;
    }
    else{
        while (n>0){
            f = f*n;
            n--;
        }
    }   
}
void factorial::display(){
    cout<<"The factorial of "<<n1<<" is "<<f<<endl;
}
int main(){
    factorial f1 ;
    f1.input();
    f1.fact();
    f1.display();
}
