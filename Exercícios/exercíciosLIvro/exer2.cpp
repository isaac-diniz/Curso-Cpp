#include <iostream>

using namespace std;

int main()
{
	float n1, n2, n3, media;
	
	cout << "Insira as notas em sequencia: \n";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	media = (n1+n2+n3)/3;
	cout << "A media das notas e: " <<media;
	return 0;
}
