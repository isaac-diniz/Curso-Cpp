//aula 23 - sobrecarga de funções
//quando eu possuo 2 ou mais funções com o mesmo nome
//só funciona quando as funções recebem argumentos diferentes

#include <iostream>
using namespace std;

//prototipar as funções
void soma();
void soma(int a,int b);

int main(){

    soma();
    soma(11,21);

    return 0;
}

//função sem argumento
void soma(){
    int a=10,b=20,re;
    re=a+b;
    cout<<"\nA soma de "<<a<<" com "<<b<<" = "<<re<<endl;
}

//função com argumento
void soma(int a,int b){
    int re=a+b;
    cout<<"\nA soma de "<<a<<" com "<<b<<" = "<<re<<endl;
}

//chamo as duas e não ocorre erro, pois uma não altera a outra