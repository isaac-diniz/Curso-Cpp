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
	
	if(n1) (condição é verdadeira e cai em "numero aceeito"
	{
		cout<<"numero aceito";
	}
	
	if(!n1) (condição pergunta: "n1 é falso?" resposta: não, pois n1 é verdadeiro (logo o testo lógico (!n1) é falso
	e o if entra em "numero não aceito". Se n1 fosse 0, o teste logico (!n1) seria verdade, pois 0 é falso (n1 é !))
	
	{
		cout<<"numero aceito";
	}else
	{
		cout<<"numero não aceito";
	}
	*/
	
	return 0;
}
