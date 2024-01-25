#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int num = rand() % 100 + 1, ten;
    do{
        cin>>ten;
        if(ten==num){
            cout<<"parabens!\n";
            break;
        }
        if(ten>num){
            cout<<"tente menos\n";
        }else{
            cout<<"tente mais\n";
        }

    }while(ten!=num);
    return 0;
}