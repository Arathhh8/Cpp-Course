// Paso de parámetros de tipo vector

//EJERCICIO : CUADRADO DE LOS ELEMENTOS DE UN CUADRADO

#include<iostream>
#include<conio.h>

void elements_square(int vector[], int);
void show_square(int vector[], int);

int main(){

    const int lenght = 5;
    int vector[lenght] = {1,2,3,4,5};

    elements_square(vector, lenght);
    show_square(vector, lenght);

    return 0;
}

void elements_square(int vector[], int lenght){
    for(int i = 0; i < lenght; i++){
        vector[i] *= vector[i];
    }
}

void show_square(int vector[], int lenght){
    for(int i = 0; i < lenght; i++){
        std :: cout << vector[i] << " ";
    }
}
