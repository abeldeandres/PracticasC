#include <stdio.h>
#include <stdlib.h>

#define BOMBONESPORPAQUETE 12
#define PAQUETESPORCAJA 24
#define PRECIOPAQUETENORMAL 2
#define PRECIOPAQUETEPASTELERIA 1

int main()
{
    int bombones;
    int paquetes;
    int cajas;
    int restobombones;
    int restopaquetes;
    int ventaNormal;
    int ventaPastelerias;
    int ventaTotal;

    do
    {
        printf("Introduzca el numero de bombones: ");
        scanf("%d", &bombones);
    }
    while (bombones < 0 || bombones > 30000);

    printf("________________________________________________________________________\n");
    paquetes= bombones / BOMBONESPORPAQUETE;
    printf("\nEl numero de paquetes es: %d unidades.\n", paquetes);
    cajas= paquetes / PAQUETESPORCAJA;
    printf("El numero de cajas es: %d unidades.\n", cajas);
    restobombones = bombones % BOMBONESPORPAQUETE;
    printf("El numero de bombones sobrantes regalados al colegio es: %d unidades.\n", restobombones);
    restopaquetes = paquetes % PAQUETESPORCAJA;
    printf("El numero de paquetes sobrantes es: %d unidades.\n", restopaquetes);
    ventaNormal = cajas * PAQUETESPORCAJA * PRECIOPAQUETENORMAL;
    ventaPastelerias = restopaquetes * PRECIOPAQUETEPASTELERIA ;
    ventaTotal = ventaNormal + ventaPastelerias;
    printf("________________________________________________________________________\n");
    printf("\nLas ganancias obtenidas por la venta normal es de: %d euros.\n", ventaNormal);
    printf("Las ganancias obtenidas por la venta a las pastelerias es de: %d euros.\n", ventaPastelerias);
    printf("Las ganancias totales son de: %d euros.\n", ventaTotal);
    printf("________________________________________________________________________\n");

}
