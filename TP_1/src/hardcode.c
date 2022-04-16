/*
 * hardcode.c
 *
 *  Created on: 16 abr. 2022
 *      Author: David
 */

#ifndef HARDCODE_C_
#define HARDCODE_C_

#include <stdio.h>
#include <stdlib.h>
#include"menu.h"
#include"hardcode.h"
#include"costos_resultados.h"


void EjercicioHardcode(float km, float y, float z, int opcion){
    float R_Debito, R_Credito, R_BitCoin, R_PrecioUni;
    float resultadoComparacion, resultadoValidado;

    float R_Debito0, R_Credito0, R_BitCoin0, R_PrecioUni0;
    #define DEBITO 0.90
    #define CREDITO 1.25
    #define BITCOIN 4606954.55

    printf("\nKilometros Ingresados : %.2f km\n\n", km);
    switch(opcion){
    case 5:
        printf("Precio Aerolineas Argentinas $%.2f\n", y);
        R_Debito = y * DEBITO;
        printf("a) Tarjeta de débito (Descuento 10%c) $%.2f\n",37, R_Debito);
        R_Credito = y * CREDITO;
        printf("b) Tarjeta de credito (Interes 25%c) $%.2f\n",37, R_Credito);
        R_BitCoin = y/BITCOIN;
        printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) %.2f BTC\n", R_BitCoin);
        R_PrecioUni= y/km;
        printf("d)Precio por km (precio unitario) $%.2f\n\n",R_PrecioUni);


        printf("Precio LATAM %.2f\n", z);
        R_Debito0 = z* DEBITO;
        printf("a) Tarjeta de debito (Descuento 10%c) $%.2f\n",37, R_Debito0);
        R_Credito0 = z * CREDITO;
        printf("b) Tarjeta de credito (Interes 25%c)  $%.2f\n",37, R_Credito0);
        R_BitCoin0 = z/BITCOIN;
        printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) %.2f BTC\n", R_BitCoin0);
        R_PrecioUni0 = z/km;
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

#endif /* HARDCODE_C_ */
