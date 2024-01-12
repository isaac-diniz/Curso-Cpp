/*
Peça ao usuário para inserir um número de 1 a 7 e exiba o dia correspondente da semana.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"insira um numero correspondente ao dia da semana: ";
	cin>>n;
	switch(n){
		case 1:
			cout<<"\ndomingo";
			break;
		case 2:
			cout<<"\nsegunda";
			break;
		case 3:
			cout<<"\nterca";
			break;
		case 4:
			cout<<"\nquarta";
			break;
		case 5:
			cout<<"\nquinta";
			break;
		case 6:
			cout<<"\nsexta";
			break;
		case 7:
			cout<<"\nsabado";
			break;
		default:
			cout<<"\ndia nao existe";
	}
	
	return 0;
}
