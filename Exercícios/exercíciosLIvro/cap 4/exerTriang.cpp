/*
Pe�a ao usu�rio para inserir os comprimentos dos lados de um tri�ngulo e determine se � um tri�ngulo equil�tero, is�sceles ou escaleno
*/
#include <iostream>
using namespace std;
int main(){
	float n1, n2, n3;
	cout<<"insira os 3 lados de um triangulo\n";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	if(n1==n2==n3){cout<<"equilatero";
	}else if(n1==n2||n2==n3||n1==n3){cout<<"isoceles";
	}else{cout<<"escaleno";}
	return 0;
}
