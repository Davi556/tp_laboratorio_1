/*
 * menu.c
 *
 *  Created on: 16 abr. 2022
 *      Author: David
 */

#ifndef MENU_C_
#define MENU_C_

#include <stdio.h>
#include <stdlib.h>
#include"menu.h"
#include"hardcode.h"
#include"costos_resultados.h"
#define Y 162965 //AA
#define Z 159339 //LATAM
#define KM 7090
void IngresoMenu(float km, float y, float z, int opcion){
    char flagViaje, flagAerolinea, flagCostos;
    flagViaje='S';
    flagAerolinea='S';
    flagCostos='S';

    do{
        printf("Bienvenida/o, este programa calcula precios de viajes aereos : \n");

		printf("1. Ingresar Kilometros total de vuelo : \n");
		printf("2. Ingresar Precio de Vuelos : \n");
		printf("3. Calcular Costos : \n");
		printf("4. Informar Resultado : \n");
		printf("5. Carga Forzada : \n");
		printf("6. Salir del programa : \n");
        printf("Ingrese una opcion: ");

        scanf("%d", &opcion);
        while(opcion>6||opcion<1){

            printf("\nERROR - EL MENU TIENE 6 OPCIONES\n\n");
            printf("Bienvenida/o, este programa calcula precios de viajes aereos : \n");
            printf("1. Ingresar Kilometros total de vuelo : \n");
    	    printf("2. Ingresar Precio de Vuelos : \n");
    	    printf("3. Calcular Costos : \n");
    	    printf("4. Informar Resultado : \n");
    	    printf("5. Carga Forzada : \n");
    	    printf("6. Salir del programa : \n");
            printf("Ingrese una opcion: ");
            scanf("%d", &opcion);
        }

		switch(opcion){
			case 1:
			flagViaje='N';
			   printf("Ingrese distancia del viaje en KM : ");
	           scanf("%f", &km);
	           while(km<50||km>50000){
	               printf("Error-Ingrese una distancia valida en KM : ");
	                scanf("%f", &km);
	           }
			break;
			case 2:
			flagAerolinea='N';
				printf("\nPrecio del vuelo Aerolineas Argentinas : ");
                scanf("%f", &y);
                while(y<2500){
	               printf("Error-Ingrese Precio del vuelo Aerolineas Argentinas : ");
	               scanf("%f", &y);
	           }
                printf("\nPrecio del vuelo LATAM : ");
                scanf("%f", &z);
                while(z<2500){
	               printf("Error-Ingrese Precio del vuelo LATAM : ");
	               scanf("%f", &z);
	           }
			break;
			case 3:
			flagCostos='N';
			if(flagViaje=='N'&&flagAerolinea=='N'){
			    CalculaCostosResultados(km, y, z, opcion);
			}else{
			    printf("\nTe falta cargar la opcion 1 o la opcion 2\n\n");
			}
			break;
			case 4:
			if(flagViaje=='N'&&flagAerolinea=='N'&&flagCostos=='N'){
			    CalculaCostosResultados(km, y, z, opcion);
			}else{
			    printf("\nTe falta cargar la opcion 1, la opcion 2 o la opcion 3\n\n");
			}
			break;
			case 5:
				EjercicioHardcode(KM, Y, Z, opcion);
			break;
			case 6:
				printf("\nGracias...\n");
			break;
		}
	}while(opcion!=6);

}

#endif /* MENU_C_ */
