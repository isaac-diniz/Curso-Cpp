#include <iostream>
using namespace std;
int main()
{
	int c=0;
	for(c; c<=500; c++){
		cout<<c<<"\n";
		if(c==250){
			break;
		}
	}
	return 0;
}
