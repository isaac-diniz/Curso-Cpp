/*Fa�a um programa para calcular e mostrar o sal�rio reajustado de um funcion�rio. O percentual de aumento
encontra-se na tabela a seguir*/
#include <iostream>
using namespace std;
int main(){
	double sal;
	cout<<"insira o salario: ";
	cin>>sal;
	if(sal<=300){
		sal=sal*1.35;
		cout<<sal;
	}else{
		sal=sal*1.15;
		cout<<sal;
	}
	return 0;
}
