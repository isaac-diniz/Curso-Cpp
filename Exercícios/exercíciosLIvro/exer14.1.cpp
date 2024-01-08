#include <iostream>
using namespace std;
int main()
{
	int nasc, idade;
	cout<<"insira o ano de nascimento: ";
	cin>>nasc;
	idade=2024-nasc;
	cout<<"sua idade esse ano e: "<<idade<<"\n";
	cout<<"sua idade em meses e de: "<<idade*12<<"\n";
	cout<<"sua idade em semanas e de: "<<idade*51<<"\n";
	cout<<"sua idade em dias e de: "<<idade*365+(idade/4)<<"\n";
	return 0;
}
