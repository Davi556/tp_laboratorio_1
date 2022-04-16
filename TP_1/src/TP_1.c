
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "hardcode.h"
#include "costos_resultados.h"

int main(){
setbuf(stdout,NULL);
    int opcion;
    float km, z, y;
    IngresoMenu(km,y,z,opcion);

    return EXIT_SUCCESS;
}
