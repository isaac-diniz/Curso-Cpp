/*Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00. Fa�a um 
programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma mensagem, caso
ele n�o tenha direito ao aumento.*/
#include <iostream>
using namespace std;
int main(){
	double sal;
	cout<<"insira o salario: ";
	cin>>sal;
	if(sal<500){
		sal=sal*1.30;
		cout<<sal;
	}else{
		cout<<"ja ganha muito";
	}
	return 0;
}
