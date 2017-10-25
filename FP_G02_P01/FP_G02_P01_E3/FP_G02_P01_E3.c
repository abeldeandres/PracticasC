#include <stdio.h>

void main(void)
{
    int seg, min, resto;
    int segMin=60;

    printf("Introduzca numero de segundos:\n");
    scanf("%d",&seg);
    min=seg/segMin;
    resto=seg%segMin;
    printf("%d seg. Son %d min. y %d seg.\n", seg, min, resto);
}
