/*
Solicite ao usuário para inserir as coordenadas (x, y) de um ponto no plano cartesiano e determine em qual quadrante ele se encontra.
*/
#include <iostream>
using namespace std;
int main(){
	double x,y;
	cout<<"X: ";
	cin>>x;
	cout<<"Y: ";
	cin>>y;
	if(x>0){
		if(y>0){
			cout<<"1 quadrante";
		}else if(y<0){
			cout<<"4 quadrante";
		}else{
			cout<<"1 e 4 quadrante";
		}
	}else if(x<0){
		if(y>0){
			cout<<"2 quadrante";
		}else if(y<0){
			cout<<"3 quadrante";
		}else{
			cout<<"2 e 3 quadrante";
		}
	}else{
		if(y>0){
			cout<<"1 e 2 quadrante";
		}else if(y<0){
			cout<<"3 e 4 quadrante";
		}else{
			cout<<"x e y sao 0";
		}
	}
	return 0;
}
