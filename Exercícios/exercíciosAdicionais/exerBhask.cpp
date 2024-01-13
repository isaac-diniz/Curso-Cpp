/*
Pe�a ao usu�rio para inserir os coeficientes de uma equa��o quadr�tica (ax� + bx + c = 0) e calcule as ra�zes usando a f�rmula de Bhaskara

Se del < 0, a equa��o do segundo grau n�o possui ra�zes reais;

Se del = 0, a equa��o do segundo grau possui uma raiz real;

Se del > 0, a equa��o do segundo grau possui duas ra�zes reais.
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
		cout<<"n�o existe raizes reais";
	}else{
		xl=(-b+delt)/2*a;
		xll=(-b-delt)/2*a;
		cout<<"1 raiz: "<<xl<<"\n";
		cout<<"2 raiz: "<<xll;
	}
	return 0;
}
