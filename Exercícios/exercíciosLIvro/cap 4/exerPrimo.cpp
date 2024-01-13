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
	int n, vf;
	cout<<"insira um numero: ";
	cin>>n;
	if(primo(n)){
		cout<<"e primo";
	}else{
		cout<<"nao e primo";
	}
	
	return 0;
}
