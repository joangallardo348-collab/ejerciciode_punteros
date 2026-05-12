#include <stdio.h>
int main()
{
    int arreglo[] = {2,4,6,8,10};
    int *ptr; //Introducimos punteros 

    ptr = &arreglo[0];

    //printf("%p ", ptr); //se le cambio el porcentaje d por p 
    for(int i = 0; i < 5; i++){
        printf("arreglo[%d] = %d ",i, arreglo[i]);  //se imprime el arreglo
        //ptr = &arreglo[i]; // primera opcion de impresion de arreglos con punteros
        printf("%d\n ", *(ptr+i)); 
    }
}
