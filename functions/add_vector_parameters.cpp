/* Realice una función que tome como parámetros un vector de números enteros y devuelva la suma de sus elementos */
#include<iostream>

int add_vectors(int vector[], int lenght);

int main(){

    const int lenght = 6;
    int vector[lenght] = {1,2,3,4,5,6};

    std :: cout << "La suma de los elementos del vector es: " << add_vectors(vector, lenght);

    return 0;
}

int add_vectors(int vector[], int lenght){

    int result = 0;

    for(int i = 0; i < lenght; i++){
        result += vector[i];
    }

    return result;
}

