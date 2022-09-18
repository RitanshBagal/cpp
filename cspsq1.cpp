#include<iostream>

using namespace std;

class Person {
    private:
    string Person;
    int age;
    
    public:
    void SetValue(string a, int b){
        Person = a;
        age = b;
    }
    void GetValue(){
        cout<<"The name of the person is "<<Person<<" and the age is "<<age<<".";
    }
};

int main() {
    Person a;
    string name;
    int age;
    cin>>name>>age;
    a.SetValue(name,age);
    a.GetValue();
    return 0;
}