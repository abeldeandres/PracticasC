#include <stdio.h>

main()
{
    int a,b,mayor;

    printf("Introducir el primer numero: ");
    scanf("%d",&a);
    printf("Introducir el segundo numero: ");
    scanf("%d",&b);
    if(a>b)
        mayor=a;
    else
        mayor=b;
    printf("El mayor es: %d\n",mayor);
}
