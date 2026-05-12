#include <stdio.h>
int main()
{
    int arreglo[] = {2,4,6,8,10};
    int *ptr; //Introducimos punteros 

    ptr = &arreglo[0];
    printf("%d ", ptr); 
    for(int i = 0; i < 5; i++){
        printf("%d ", arreglo[i]);  //se imprime el arreglo
    }
}
