/*
 * costos_resultados.c
 *
 *  Created on: 16 abr. 2022
 *      Author: David
 */

#ifndef COSTOS_RESULTADOS_C_
#define COSTOS_RESULTADOS_C_

#include <stdio.h>
#include <stdlib.h>
#include"menu.h"
#include"hardcode.h"
#include"costos_resultados.h"


void CalculaCostosResultados(float km,float y,float z,int opcion){
    float R_Debito, R_Credito, R_BitCoin, R_PrecioUni;
    float resultadoComparacion, resultadoValidado;

    float R_Debito0, R_Credito0, R_BitCoin0, R_PrecioUni0;
    #define DEBITO 0.90
    #define CREDITO 1.25
    #define BITCOIN 4606954.55

    R_Debito = y * DEBITO;
    R_Credito = y * CREDITO;
    R_BitCoin = y / BITCOIN;
    R_PrecioUni= y / km;
    R_Debito0 = z * DEBITO;
    R_Credito0 = z * CREDITO;
    R_BitCoin0 = z / BITCOIN;
    R_PrecioUni0 = z / km;

    switch(opcion){
    case 3 :
    printf("\n\nPrecios Calculados\n\n");
    printf("a) Tarjeta de débito (descuento 10%c)\n", 37);
    printf("b) Tarjeta de crédito (interés 25%c)\n",37);
    printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
    printf("d) Mostrar precio por km (precio unitario)\n");
    printf("e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n");
    break;
    case 4:
    printf("Kilometros Ingresados : %.2f km\n\n", km);
    printf("Precio Aerolineas Argentinas $%.2f\n", y);
    printf("a) Tarjeta de débito (Descuento 10%c) $%.2f\n",37, R_Debito);
    printf("b) Tarjeta de credito (Interes 25%c) $%.2f\n",37, R_Credito);
    printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) %.2f BTC\n", R_BitCoin);
    printf("d)Precio por km (precio unitario) $%.2f\n\n",R_PrecioUni);

    printf("Precio LATAM %.2f\n", z);
    printf("a) Tarjeta de debito (Descuento 10%c) $%.2f\n",37, R_Debito0);
    printf("b) Tarjeta de credito (Interes 25%c)  $%.2f\n",37, R_Credito0);
    printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) %.2f BTC\n", R_BitCoin0);
    printf("d)Precio por km (precio unitario) $%.2f\n\n",R_PrecioUni0);
    resultadoComparacion = y - z;
    if(resultadoComparacion<0){
        resultadoValidado = (resultadoComparacion)*(-1);
        printf("e) La diferencia de precio: Aerolineas Argentinas es $%.2f mas barato que LATAM\n\n", resultadoValidado);
        }else{
            if(resultadoComparacion>0){
            printf("e) La diferencia de precio: Aerolineas Argentinas es $%.2f mas caro que LATAM\n\n", resultadoComparacion);
            }
        }
    }
}

#endif /* COSTOS_RESULTADOS_C_ */
