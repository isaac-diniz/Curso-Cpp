/*
Sabe-se que: 
p� = 12 polegadas 
1 jarda = 3 p�s
1 milha = 1,760 jarda
Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre os resultados.
a) polegadas; 
b) jardas; 
c) milhas.
*/
#include <iostream>
using namespace std;
int main()
{
	int pe;
	cout<<"insira a medida em pes: ";
	cin>>pe;
	cout<<"medida em polegadas: "<<pe*12<<"\n";
	cout<<"medida em jardas: "<<pe/3<<"\n";
	cout<<"medida em milhas: "<<(pe/3)/1760<<"\n";
	return 0;
}
