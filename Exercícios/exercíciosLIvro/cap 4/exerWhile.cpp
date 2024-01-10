#include <iostream>
using namespace std;
int main()
{
	int n, tot=0;
	cout<<"insira um numero: ";
	cin>>tot;
	n=tot;
	while (n>1)
	{
		tot=tot*(n-1);
		n=n-1;
	}
	cout<<tot;
	return 0;
}
