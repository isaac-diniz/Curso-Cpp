#include <iostream>
using namespace std;
int soma(int a, int b);
int main(){
    cout<<soma(1,3);
    return 0;
}
int soma(int a, int b){
    int s = a+b;
    return s;
    cout<<"isso não será impresso pois acontece depois do return, que encerra a função.";
}