#include <iostream>
using namespace std;
int main(){
    int soma=0;
    for (int i=1; i<=100; i++){
        soma+=i*i*i;
        cout<<i<<endl;
    }
    cout<<soma;
    return 0;
}