/*
Solicite ao usu�rio para inserir tr�s n�meros e os exiba em ordem crescente.
*/
#include <iostream>
using namespace std;
int main(){
    double n1,n2,n3,temp;
    cout<<"Digite o primeiro n�mero: ";
    cin>>n1;
    cout<<"Digite o segundo n�mero: ";
    cin>>n2;
	cout<<"Digite o terceiro n�mero: ";
    cin>>n3;
    if(n1>n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    if(n2>n3){
        temp=n2;
        n2=n3;
        n3=temp;
    }
    if(n1>n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }
	cout<<n1<<", "<<n2<<", "<< n3;
    return 0;
}
