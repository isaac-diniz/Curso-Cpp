/*
Verificar N�mero Par ou �mpar:

Pe�a ao usu�rio para inserir um n�mero e informe se � par ou �mpar.
*/

#include <iostream>
using namespace std;
int main(){
	int n, n1;
	cin>>n1;
	n=n1%2;
	if(n==0){
		cout<<"e par";
	}else{
		cout<<"e impar";
	}
	return 0;
}
