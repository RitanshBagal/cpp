#include <iostream>
using namespace std;

int fun(int A[],int n){
    for(int i = 0;i<5;i++){
        cout<<A[i]<<endl;
    }
}
int main(){
    int A[] = {1,2,3,4,5};
    int n = 5;
    fun(A,n);
    for(int x:A){
        cout<<x<<" ";
        }
    return 0;
}