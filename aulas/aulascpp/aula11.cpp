#include <iostream>
using namespace std;
int main()
{
	double n1;
	cin>>n1;
	
	//para AND e OR:
	
	if((n1>3 && n1<7)||(n1>7 && n1<10))
	{
		cout<<"numero aceito";
	}else
	{
		cout<<"numero recusado";
	}
	
	/*
	para NOT:
	
	int n1=1; (1=true, verdade)
	
	if(n1) (condi��o � verdadeira e cai em "numero aceeito"
	{
		cout<<"numero aceito";
	}
	
	if(!n1) (condi��o pergunta: "n1 � falso?" resposta: n�o, pois n1 � verdadeiro (logo o testo l�gico (!n1) � falso
	e o if entra em "numero n�o aceito". Se n1 fosse 0, o teste logico (!n1) seria verdade, pois 0 � falso (n1 � !))
	
	{
		cout<<"numero aceito";
	}else
	{
		cout<<"numero n�o aceito";
	}
	*/
	
	return 0;
}
