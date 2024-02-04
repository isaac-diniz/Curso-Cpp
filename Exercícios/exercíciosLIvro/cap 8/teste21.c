#include <stdio.h>
#include “c:\cursocpp\Curso_Cpp\Exercícios\exercíciosLIvro\cap 8\teste2.h”
int main()
{
int num1, num2, res;
   sub_rotina1();
   sub_rotina2();
   printf(“Digite um número: “);
   scanf(“%d%*c”,&num1);
   printf(“Digite outro número: “);
   scanf(“%d%*c”,&num2);
   res = sub_rotina3(num1, num2);
   printf(“resultado = %d”,res);
   getchar();
   return 0;
}