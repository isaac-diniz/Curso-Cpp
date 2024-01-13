/*
Peça ao usuário para inserir os coeficientes de uma equação quadrática (ax² + bx + c = 0) e calcule as raízes usando a fórmula de Bhaskara

Se del < 0, a equação do segundo grau não possui raízes reais;

Se del = 0, a equação do segundo grau possui uma raiz real;

Se del > 0, a equação do segundo grau possui duas raízes reais.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a, b, c, delt, xl, xll;
	cout<<"insira a, b e c em ordem:\n";
	cin>>a;
	cin>>b;
	cin>>c;
	delt=sqrt((b*b)-4*a*c);
	if(delt<0){
		cout<<"não existe raizes reais";
	}else{
		xl=(-b+delt)/2*a;
		xll=(-b-delt)/2*a;
		cout<<"1 raiz: "<<xl<<"\n";
		cout<<"2 raiz: "<<xll;
	}
	return 0;
}
