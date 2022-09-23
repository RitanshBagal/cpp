#include <iostream>
using namespace std;
int sum(int n){  //Recursive
    if(n==0){
        return 0;
    }
    return sum(n-1)+n;
}

int Isum(int n){  //Iterative
    int i,s=0;
    for(i = 1;i<=n;i++){
        s = s+i;
    }
    return s;
}
int main(){
    int x = 5;
    cout<<Isum(x);
    return 0;
}