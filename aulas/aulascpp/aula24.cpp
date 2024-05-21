/*
omissão de argumentos ou valores padrões para argumentos dentro de uma função
criação da possibilidade de omissão desses argumentos

ex: função com 3 argumentos e eu uso somente um, ou nenhum
*/
#include<iostream>
using namespace std;

/*
para fazer isso, basta passar um valor padrão para o(s) argumento(s) da função
segue o exemplo
*/
void example(string text="\nexemplo");
/*
dessa forma, não necessariamente, precisa ser atribuido um valor a tal função
*/

int main(){

    example();
    //saída: \nexemplo
    example("o valor interno passado pela chamada sobressai o valor padrão dos argumentos.");
    //saída: o valor interno passado pela chamada sobressai o valor padrão dos argumentos.

    return 0;
}

void example(string text){
    cout<<text<<endl;
}