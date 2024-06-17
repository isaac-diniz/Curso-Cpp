/*
Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.
*/

#include <iostream>
using namespace std;

int divis(int n1, int n2){
    if(n1%n2==0){
        cout<<0;
        return 0;
    }else{
        cout<<(n1%n2);
        return (n1%n2);
    }
}

int main(){
    int n1, n2;
    cin>>n1;
    cin>>n2;
    divis(n1,n2);
}