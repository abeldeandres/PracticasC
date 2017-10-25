#include <stdio.h>
#include <stdlib.h>

main()
{
   int n,suma,producto,i;
   printf("Introducir el numero n:");
   scanf("%d",&n);
   suma=0;
   producto=1;
   i=1;
   while (i<=n)
   {
       suma=suma+i;
       producto=producto*i;
       i=i+1;
   }
   printf("Suma: %d, producto: %d\n",suma,producto);
}
