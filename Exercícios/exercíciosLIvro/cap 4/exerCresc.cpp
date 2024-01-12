/*
Solicite ao usuário para inserir três números e os exiba em ordem crescente.
*/
#include <iostream>
using namespace std;
int main(){
    double n1,n2,n3,temp;
    cout<<"Digite o numeros em sequencia\n";
    cin>>n1;
    cin>>n2;
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
