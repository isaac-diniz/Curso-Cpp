#include <iostream>
using namespace std;
int main()
{
	int n=100;
	//enquanto a condi��o dentro do par�ntese for VERDADE o codigo � executado - while
	//ja no do while, o c�digo primeiro � executado e dps passa pelo "enquanto", garantindo assim no minimo 1 execu��o mesmo se a condi��o dentro do parentesis
	//seja mentira.
	do{//comando fa�a (ignora o teste
		cout<<n<<"\n";
		//n++;
		//terminaria o c�digo sempre com 1 a mais do seu valor incial do loop em quest�o
	}while(n++<10);
	
	return 0;
}
