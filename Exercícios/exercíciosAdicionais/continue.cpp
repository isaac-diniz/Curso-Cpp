#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        if(i==2) continue;
        //continue: pula o restante da repetiçao de caso n para o proximo caso n1.
        if(i==6) break;
        //break: encerra o processo de repetição.
        cout<<i<<endl;
    }
    return 0;
}