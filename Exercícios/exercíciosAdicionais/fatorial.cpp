//máx suportado = 20

#include <iostream>
using namespace std;
void factorial(int num, long long multiply=1);
int main(){
    int i=0;
    cin>>i;
    factorial(i);
    return 0;
}
void factorial(int num, long long multiply){
    multiply*=num;
    cout<<multiply/num<<" x "<<num<<" = "<<multiply<<endl;
    if(num>1){
        factorial(--num,multiply);
    }if(num==0)
        cout<<1;
}