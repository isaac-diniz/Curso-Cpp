#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	double nota;
	char repeat;
	inicio:
	system("cls");
	cout<<"insira uma nota: ";
	cin>>nota;
	if(nota>=75)
	{
		cout<<"parabens, aprovado";
	}else if(nota>=60)
	{
		cout<<"aprovado";
	}else if(nota>=45)
	{
		cout<<"recuperacao";
	}else
	{
		cout<<"reprovado";
	}
	cout<<"\ndeseja inserir mais notas? [s/n] ";
	cin>>repeat;
	if(repeat=='s' or repeat=='S')
	{
		goto inicio;
	}
	return 0;
}
