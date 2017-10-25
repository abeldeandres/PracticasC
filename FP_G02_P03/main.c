#include <stdio.h>
#include <stdlib.h>

int num1=0, num2=0;

void MensajeBienvenida()
{
    printf("--> BIENVENIDO A LA APLICACION 'PRODUCTO Y SUMA' <--\n\n");
}

void LeerNumeros()
{
    printf("Ha seleccionado la opcion 'Leer Numeros'.\n\n");
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    //printf("%d",numero1);
}

int CalcularProducto(int numero1,int numero2)
{
    int producto=0;
    producto = numero1 * numero2;
    return producto;
}

int CalcularSuma(int numero1,int numero2)
{
    int suma=0;
    suma = numero1 + numero2;
    return suma;
}
void MensajeDespedida()
{
    printf("Gracias por utilizar nuestro programa.\n");
}

void Pausa()
{
    system("pause");
    system("cls");
}

int main()
{
        int opcion =0;
        int opcion1 =0;
        int opcion2 =0;
        int opcion3 =0;

     do
    {
        MensajeBienvenida();
        printf("\n----------MENU----------\n");
        printf("1.- Leer Numeros\n");
        printf("2.- Calcular Producto\n");
        printf("3.- Calcular Suma\n");
        printf("4.- Mostrar Resultados\n");
        printf("0.- Salir\n\n");

        printf("Elija Opcion: ");
        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
                case 1:
                    LeerNumeros();
                    //printf("%d",num1);
                    opcion1=1;
                    Pausa();
                    break;

                case 2:
                        if (opcion1==1)
                        {
                            printf("Ha seleccionado la opcion 'Calcular Producto'.\n\n");
                            CalcularProducto(num1,num2);
                            opcion2=1;
                            printf("Operacion realizada con exito!.\n\n");
                            Pausa();
                            break;
                        }
                        else
                        {
                            printf("Elija la opcion 1. \n");
                            Pausa();
                            break;
                        }

                case 3:
                        if (opcion2==1)
                        {
                            printf("Ha seleccionado la opcion 'Calcular Suma'.\n\n");
                            CalcularSuma(num1,num2);
                            opcion3=1;
                            printf("Operacion realizada con exito!.\n\n");
                            Pausa();
                            break;
                        }
                        else
                        {
                            printf("Elija la opcion 1. \n");
                            Pausa();
                            break;
                        }


                case 4:
                        if ((opcion2==1)&&(opcion3==1))
                        {
                            printf ("El producto de dichos numeros es: %d\n", num1 * num2);
                            printf ("La suma de dichos numeros es: %d\n", num1 + num2);
                            Pausa();
                            break;
                        }
                         else
                         {
                            printf("Elija la opcion 2 y 3 previamente. \n");
                            Pausa();
                            break;
                         }

                case 0:
                    printf("Ha seleccionado la opcion 'Salir'.\n\n");
                    MensajeDespedida();
                    break;

                default:
                    printf("Opcion incorrecta. Intentelo de nuevo.\n\n");
                    Pausa();
                    break;
        }
    } while (opcion != 0);
    return 0;
}
