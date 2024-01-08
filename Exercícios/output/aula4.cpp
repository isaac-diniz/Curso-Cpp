#include <iostream>

using namespace std;

int main(){
	
	//tipo, nome, valorPadrão ("=" atribuir, inserir)
	
	int exemplos=0; //números inteiros
	
	char exemploLetra='B'; //char => caractere, caractere 'B' com apóstrofro
	//ex: char letras[10]"10 caracteres" é um vetor, armazena um texto, porém cada caractere em uma posição
	
	double exemploDecimal=0.1; //números reais
	
	float exemploDecimalMenos=0.1; //semelhante ao double, porém, menos preciso
	//ex: double="4.99999", float="5.0"
	
	bool exemploSimples=true; //true=Verdadeiro=1 ou false=falso=0, booleano, sim ou não
	//testes condicionais
	
	string exemploText="Isaac"; //diferente do char, armazena um texto ao invés de apenas um caractere
	
	cout << "Digite um numero inteiro para nosso exemplo: ";
	cin >> exemplos;
	
	cout << "Digite uma letra: ";
	cin >> exemploLetra;
	
	cout << "Digite um numero real para nosso exemplo: ";
	cin >> exemploDecimal;
	
	cout << "Digite um numero real nao tao preciso para nosso exemplo: ";
	cin >> exemploDecimalMenos;
	
	//não faz sentido receber um valor bool do usuário, já que não seria uma afirmação ou negação
	
	cout << "Digite um texto para nosso exemplo: ";
	cin >> exemploText;
	
	cout << "\nInteiro: " << exemplos << "\nLetra: "<< exemploLetra << "\nDecimal: " << exemploDecimal << "\nDecimal 2: " << exemploDecimalMenos << "\nBool: " << exemploSimples << "\nTexto: "<< exemploText << "\n";
	
	return 0;
}
