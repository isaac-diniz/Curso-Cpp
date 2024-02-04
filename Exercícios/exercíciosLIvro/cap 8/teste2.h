#include <stdio.h>
void sub_rotina1()
{
    printf(“mostrando uma mensangem”);
}
void sub_rotina2()
{
    int a,b,c;
    printf(“Digite o valor de a: “);
    scanf(“%d%*c”,&a);
    printf(“Digite o valor de b: “);
    scanf(“%d%*c”,&b);
    c = a - b;
    printf(“Resultado = %d”,c);
}
int sub_rotina3(int x,int y)
{
    int res;
    res = x * y;
    return res;
}