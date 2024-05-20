#include <iostream>
using namespace std;
int main()
{
	int exemplo = 0;
	bool ex = true;
	
	//tipos de teste l�gicos:
	// <, >, <=, >=, ==, !=
	if(ex)
	{
		//teste l�gico � verdade
		cout<<"saida 1";
	}else
	{
		//teste l�gico � falso
		cout<<"saida 2";
	}
	//saida 1 � verdadeira quando usamos "ex" que � bool true, logo cai como teste l�gico verdadeiro
	//saida 1 � falsa quando usamos "exemplo" que tem valor bool == 0 (falso), logo cai como falso
	
	//bool -> true, 1 --- false, 0
	
	//em outros casos, usariamos compara��es matem�ticas normalmente
	return 0;
}
