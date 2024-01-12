/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um 
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/
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
