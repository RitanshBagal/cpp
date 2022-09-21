#include <iostream>
#include <string.h>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
    char *name;

    void print(){
        cout<<endl;
        cout<<"{ Name: "<<this->name<<" ,";
        cout<<" health: "<<this->health<<" ,";
        cout<<" level: "<<this->level;
        cout<<" }"<<endl;
    }

    //COPY CONSTRUCTOR
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"copy constructor called"<<endl;  
        this->health = temp.health;
        this->level = temp.level;
    }
    Hero(){ 
        cout<<"CONSTRUCTOR CALLED"<<endl;
        name = new char[100];
    }
    //PARAMETERISED CONSTRUCTOR:
    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health = health;
    }

        Hero(int health,char level){
        this->level = level;
        this->health = health;

    }

    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }
    char getLevel(){
        return level;
    }
    void setLevel(char l){
        level =l;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};
int main(){
    Hero hero1;
    hero1.setHealth(26);
    hero1.setLevel('A');
    char name[8] = "Ritansh";
    hero1.setName(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();














    /*
    // STATIC ALLOCATION:
    Hero a;
    a.setHealth(99);
    a.setLevel('A');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //DYNAMIC ALLOCATION:
    Hero *b = new Hero;
    b->setHealth(90);
    b->setLevel('b');
    cout<<"health is "<<b->getHealth()<<endl;
    cout<<"level is "<<b->getLevel()<<endl;

    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;
    */

/*

   //object created statically
   cout<<"hi"<<endl;
   Hero Ramesh;
   cout<<"bye"<<endl;

   //object created dinamically
   //Hero *b = new Hero;
   Hero *b = new Hero();//same thing 

   */

  /*
  //object created statically
  Hero Ram(10);
  cout<<"address of Ram is "<<&Ram<<endl;

  Hero r(47,'a');

  //obj created dynamically
  Hero*h = new Hero(11);
  Hero *b = new Hero(26,'A');
  */
/*
Hero R(90,'a');
cout<<R.getHealth()<<endl;
cout<<R.getLevel()<<endl;

//copy constructor
Hero S(R);
cout<<S.getHealth()<<endl;
cout<<S.getLevel()<<endl;

*/
    return 0;
}