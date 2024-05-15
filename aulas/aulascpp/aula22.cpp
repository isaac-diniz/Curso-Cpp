//aula 22 curso cpp, funções

#include <iostream>

using namespace std;

//como a nossa função texto vem depois da função main, devemos prototipar esssas funções
//para a função main consiga usar as demais funções, precisamos apresentar o tipo de retorno, nome e argumentos da função
void texto();


//função base, tipo int; main; 
int main(){
	
	texto();
	
	//reaproveitação de codigo
	texto();
	
	
	
	//retorna pra quem chamar a função main o valor 0
	return 0;
}

//ideal: construir as funções logo depois do fechamento da funçõa main
//motivo: sintaxe do código e organização

//primeiro: tipo de retorno que a função dá, ex.: void, int e etc
//segunda: nome da função, ex.: soma
//dentro de parêntesis damos os argumentos de entrada para a função
void texto() {
	//o que são argumentos de entrada? vareiáveis que permitem a passagem de valores pra dentro da variável
	cout<<"Texto exemplo"<<endl;
	
}
