#include <iostream>
using namespace std;
int main(){
    int pocketMoney = 4000;
    for(int date = 1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketMoney==0){
            break;
        }
        cout<<"you can go out today"<<endl;
        pocketMoney = pocketMoney-400;
    }
    return 0;
}
