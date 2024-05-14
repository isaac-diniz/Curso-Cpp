//argumentos para fun��o "main()" -> agrc & argv
//aula 21 curso cpp
//agrc tipo inteiro = quantidade de argumentos passados
//agrv tipo char, PONTEIRO, MATRIZ, * quer dizer que ele � um ponteiro = armazena os argumentos

#include<iostream>

//biblioteca para modifica��o/verifica��o de strings

#include<string.h>

using namespace std;

int main(int argc, char *argv[]){
	
	if(argc > 1) {
		cout<<"Voce passou um ou mais parametros!\nO parametro de indicie 1 passado foi: "<<argv[1]<<"\n\n";
		//m�todo "strcmp" faz compara��es de strings; se forem iguais, o metodo retorna 0 (falso), se n�o, se a primeira
		//string for maior que a segunda, retorna valor maior que zero, j� se a segunda string for maior, retorna
		//valor negativo.
		
		//if(strcmp('string 1', 'string 2')){conteudo do codigo}
		
		if(!strcmp(argv[1],"texto")){
			//!estou negando a afirma��o pois o resultado "certo" retorna 0 (false)
			
			cout<<"true";
			cout<<(strcmp(argv[1],"texto"))<<"\n";
		}else{
			cout<<"false";
			cout<<(strcmp(argv[1],"texto"))<<"\n";
		}
	}
	cout<<"\n";
	for(int i=0; i<argc; i++){
		cout<<i<<" - "<<argv[i]<<"\n";
	}
	
	cout<<"\n"<<argc<<"\n";
	
	return 0;
}
