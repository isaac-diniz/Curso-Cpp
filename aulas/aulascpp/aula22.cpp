//aula 22 curso cpp, fun��es

#include <iostream>

using namespace std;

//como a nossa fun��o texto vem depois da fun��o main, devemos prototipar esssas fun��es
//para a fun��o main consiga usar as demais fun��es, precisamos apresentar o tipo de retorno, nome e argumentos da fun��o
void texto();


//fun��o base, tipo int; main; 
int main(){
	
	texto();
	
	//reaproveita��o de codigo
	texto();
	
	
	
	//retorna pra quem chamar a fun��o main o valor 0
	return 0;
}

//ideal: construir as fun��es logo depois do fechamento da fun��a main
//motivo: sintaxe do c�digo e organiza��o

//primeiro: tipo de retorno que a fun��o d�, ex.: void, int e etc
//segunda: nome da fun��o, ex.: soma
//dentro de par�ntesis damos os argumentos de entrada para a fun��o
void texto() {
	//o que s�o argumentos de entrada? varei�veis que permitem a passagem de valores pra dentro da vari�vel
	cout<<"Texto exemplo"<<endl;
	
}
