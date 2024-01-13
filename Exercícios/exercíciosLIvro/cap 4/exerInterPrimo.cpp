#include <iostream>
#include <cmath>
using namespace std;

bool primo (int n){
	if(n<1){
		return false;
	}
	for (int i=2; i<=sqrt(n); i++){
		if((n%i)==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n, n2;
	cout<<"insira 2 numeros para criar um intervalo:\nde: ";
	cin>>n; cout<<"ate: ";
	cin>>n2;
	for(n; n<=n2; n++){
		if(primo(n)){
			cout<<n<<" e primo\n";
		}else{
			cout<<n<<" nao e primo\n";
		}
	}
	return 0;
}
