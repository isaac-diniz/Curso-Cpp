#include <iostream>
using namespace std;
int main()
{
	int exemplo = 0;
	bool ex = true;
	
	//tipos de teste lógicos:
	// <, >, <=, >=, ==, !=
	if(ex)
	{
		//teste lógico é verdade
		cout<<"saida 1";
	}else
	{
		//teste lógico é falso
		cout<<"saida 2";
	}
	//saida 1 é verdadeira quando usamos "ex" que é bool true, logo cai como teste lógico verdadeiro
	//saida 1 é falsa quando usamos "exemplo" que tem valor bool == 0 (falso), logo cai como falso
	
	//bool -> true, 1 --- false, 0
	
	//em outros casos, usariamos comparações matemáticas normalmente
	return 0;
}
