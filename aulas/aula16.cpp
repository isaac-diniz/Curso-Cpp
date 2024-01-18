#include <iostream>
using namespace std;
int main()
{
	int n=100;
	//enquanto a condição dentro do parêntese for VERDADE o codigo é executado - while
	//ja no do while, o código primeiro é executado e dps passa pelo "enquanto", garantindo assim no minimo 1 execução mesmo se a condição dentro do parentesis
	//seja mentira.
	do{//comando faça (ignora o teste
		cout<<n<<"\n";
		//n++;
		//terminaria o código sempre com 1 a mais do seu valor incial do loop em questão
	}while(n++<10);
	
	return 0;
}
