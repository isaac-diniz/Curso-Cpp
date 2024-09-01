#include <iostream>
using namespace std;
void example_contador(int num, int cont=0);
int main(){
    example_contador(10);
    return 0;
}
void example_contador(int num, int cont){
    cout<<cont<<endl;
    if(num>cont){
        example_contador(num,++cont);
    }

}