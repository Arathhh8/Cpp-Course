#include<iostream>

// Prototipo de la función

template <class dataType>
void show_abs(dataType num);

// 1. 
float mult(float num1, float num2);

int main(){
    // int num1 = -4;
    // float num2 = 56.67;
    // double num3 = 123.5678;

    // show_abs(num1);
    // show_abs(num2);
    // show_abs(num3);

    std :: cout << "El resultado de la multiplicación es: " << mult(2.2,2.3);

    return 0;
}

// Función con plantilla de función
template <class dataType>
void show_abs(dataType num){
    if(num < 0){
        num = num * (-1);
    }
    std :: cout << "El valor absoluto del numero es: " << num << std :: endl;
}

/* 1. Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, multiplique 
estos dos números y despliegue el resultado */ 

float mult(float num1, float num2){

    float result = 0;

    result = num1 * num2;

    return result;
}