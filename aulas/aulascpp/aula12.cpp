#include <iostream>
using namespace std;
int main()
{
	int n1;
	string res;
	cin>>n1;
	//(n1>=60) ? res="Aproavado" : res="Reprovado";
	res=(n1>=60) ? "aprovado" : "reprovado";
	/*
	int x = 5, y = 5;
	(x>=5) ? y++ : y--;
	*/
	cout<<res;
	return 0;
}
