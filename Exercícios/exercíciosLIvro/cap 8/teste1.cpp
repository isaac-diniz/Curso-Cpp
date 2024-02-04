/*
 1. ALGORITMO
 2. DECLARE sal, aum, novo_sal NUMÉRICO
 3. LEIA sal
 4. aum ← calculo (sal)
 5. novo_sal ← sal + aum
 6. ESCREVA “Novo salário é”, novo_sal
 7. FIM_ALGORITMO.
 8. SUB-ROTINA calculo (sal NUMÉRICO) // passagem de parâmetro por valor
 9.  DECLARE perc, valor NUMÉRICO
 10.  LEIA perc 
 11.  valor ←  sal * perc / 100 
 12.  RETORNE valor 
 13. FIM_SUB_ROTINA calculo 

#include <stdio.h>
void soma(int a, int b)
{ 
    int s;  // variável local da sub-rotina soma
    s = a + b;
    printf("\nSoma = %d",s); 
} 
int main() 
{ 
   int a, b;  // variáveis locais da sub-rotina main
   printf("\nDigite o primeiro numero: ");
   scanf("%d%*c",&a);
   printf("\nDigite o segundo numero: ");
   scanf("%d%*c",&b);
   soma(a,b); 
   getchar();
   return 0;
}
*/
#include <iostream>
using namespace std;
void somar(int a, int b){
    int s;
    s=a+b;
    cout<<"A soma e: "<<s;
}int main(){
    int a, b;
    cout<<"Insira o primeiro numero: ";
    cin>>a;
    cout<<"Insira o segundo numero: ";
    cin>>b;
    somar(a, b);
    return 0;
}