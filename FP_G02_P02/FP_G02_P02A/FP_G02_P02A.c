#include <stdio.h>
#include <stdlib.h>
#define COMPLEMENTOEDAD 180
#define COMPLEMENTOFAMILIAR 60
#define COMPLEMENTOPRODUCTIVIDADMAS8HORAS 70
#define COMPLEMENTOPRODUCTIVIDADMENOS8HORAS 30
#define DESCUENTOLABORAL 40

int main()
{

    float sueldoBruto;
    int complementoEdad = 0;
    int complementoFamiliar = 0;
    int complementoExtraordinario = 0;
    int complementoProductividad = 0;
    int descuentoLaboral = 0;
    float seguridadSocial = 0;
    float retencion = 0;
    float importeRetencion = 0;
    float sueldoNeto = 0;

    float sueldoBase;
    int edad;
    int numeroHijos;
    char categoria;
    int dedicacion;

    printf("Introduzca el sueldo base: ");
    scanf("%f",&sueldoBase);

    do {
    printf("Introduzca su edad: ");
    scanf("%d",&edad);
    } while (!( edad >= 16 && edad <= 67));


    printf("Introduzca el numero de hijos: ");
    scanf("%d",&numeroHijos);

    do {
    printf("Introduzca su categoria (A,B,C): ");
    fflush(stdin);
    scanf("%c",&categoria);
    } while ( (categoria != 'A') && (categoria != 'B') && (categoria != 'C'));

    do {
    printf("Introduzca el numero de horas de trabajo asignadas por dia (entre 4 y 11): ");
    scanf("%d",&dedicacion);
    } while ( dedicacion < 4 || dedicacion > 11);


    if(edad<25 || edad>50)
    {
        complementoEdad= COMPLEMENTOEDAD;
    }

    complementoFamiliar = COMPLEMENTOFAMILIAR * numeroHijos;

    if(((categoria == 'B') && (numeroHijos>5)) || ((categoria == 'C') && (numeroHijos>3)))
    {
           complementoExtraordinario = 0.05 * sueldoBase;
    }

    if(dedicacion > 8)
    {
        complementoProductividad = COMPLEMENTOPRODUCTIVIDADMAS8HORAS;
    }
    else
    {
        complementoProductividad = COMPLEMENTOPRODUCTIVIDADMENOS8HORAS;
    }

    if ((categoria=='A') && (dedicacion<8))
    {
        descuentoLaboral = DESCUENTOLABORAL * (8 - dedicacion);
    }

    sueldoBruto = sueldoBase + complementoEdad + complementoFamiliar + complementoExtraordinario + complementoProductividad - descuentoLaboral;
    seguridadSocial = 0.05 * sueldoBruto;

    if(sueldoBruto<=700)
    {
        retencion = 0.12;
    }
    else if(sueldoBruto<=1200)
    {
        retencion = 0.15;
    }
    else
    {
        retencion = 0.18;
    }
    importeRetencion = retencion * sueldoBruto;

    sueldoNeto = sueldoBruto - seguridadSocial - importeRetencion;

    printf("\n\n_____________________________________________________________________________");
    printf("\n\nDATOS GENERALES:    Edad:            %4d", edad);
    printf("\n                    Numero de hijos: %4d", numeroHijos);
    fflush(stdin);
    printf("\n                    Categoria:       %4c", categoria);
    printf("\n                    Dedicacion:      %4d horas", dedicacion);
    printf("\n\nSUELDO BRUTO: ");
    printf("\n      Sueldo Base..................................:           %7g euros.",sueldoBase);
    printf("\n      Complemento y Descuentos:  Complemento de Edad:          %7d euros.", complementoEdad);
    printf("\n                                 Complemento Familiar:         %7d euros.", complementoFamiliar);
    printf("\n                                 Complemento Extraordinario:   %7d euros.", complementoExtraordinario);
    printf("\n                                 Complemento de Productividad: %7d euros.", complementoProductividad);
    printf("\n                                 Descuento Laboral:            %7d euros.", descuentoLaboral);
    printf("\n                                                           ------------------");
    printf("\n                          IMPORTE TOTAL (Sueldo Bruto):        %7g euros.", sueldoBruto);
    printf("\n\nSUELDO NETO: ");
    printf("\n                                 Sueldo Bruto:                 %7g euros.", sueldoBruto);
    printf("\n                                 Seguridad Social (5%c):        %7g euros.", 37,seguridadSocial); /* El simbolo % tiene el código ASCII 37 */
    printf("\n                                 IRPF (%g%c):                   %7g euros.", retencion*100, 37, importeRetencion);
    printf("\n                                                           ------------------");
    printf("\n                          IMPORTE TOTAL (Sueldo Neto):         %7g euros", sueldoNeto);
    printf("\n\n_____________________________________________________________________________");

}
