/* 1. Escribe un programa que defina un vector de números y calcule la suma de sus elementos*/

#include<iostream>

void array_sum();
void cin_cout_array();
void bigger_num_in_array();
void two_arrays_in_one();
void multiply_arrays();

int main(){

    //array_sum();
    //cin_cout_array();
    //bigger_num_in_array();
    //two_arrays_in_one();
    multiply_arrays();

    return 0;
}


void array_sum(){
    int array_elements[] = {0,1,2,3,4,5};
    int result_sum = 0;

    for(int i = 0; i < 6; i++){
        result_sum = array_elements[i] + result_sum;
    }
    
    std :: cout << result_sum;
}

void cin_cout_array(){

    int array_cin[5], array_lenght;

    std :: cout << "Indica el numero de elementos que tendra el arreglo: "; std :: cin >> array_lenght;

    for(int i = 0; i < array_lenght; i++){
        std :: cout << "Escribe el valor para el indice " << i << ": "; std :: cin >> array_cin[i];
    }

    for(int j = 0; j < array_lenght; j++){
        std :: cout <<"Indice: " << j << " Valor: " << array_cin[j] << std :: endl;
    }
}

/* 5. Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector*/

void bigger_num_in_array(){
    int array_elements[100], array_lenght, bigger_number = 0;

    std :: cout << "Indica el numero de elementos que tendra el arreglo: "; std :: cin >> array_lenght;

    for(int i = 0; i < array_lenght; i++){
        std :: cout << "Escribe el valor para el indice " << i << ": "; std :: cin >> array_elements[i];
    }

    for(int i = 0; i < array_lenght; i++){
        if(array_elements[i] > bigger_number ){
            bigger_number = array_elements[i];
        }
    }
    std :: cout << "El numero mas grande en el arreglo es: " << bigger_number;
}

/* 7. Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando
en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar*/

void two_arrays_in_one() {
    char array_one[] = {'a', 'b', 'c', 'd', 'e'};
    char array_two[] = {'f', 'g', 'h', 'i', 'j'};
    char arrays_fusion[11]; // Aumentamos el tamaño en 1 para el carácter nulo

    for (int i = 0; i < 5; i++) {
        arrays_fusion[i] = array_one[i];
    }

    for (int i = 0; i < 5; i++) {
        arrays_fusion[5 + i] = array_two[i];
    }

    arrays_fusion[10] = '\0'; // Agregamos el carácter nulo al final

    std::cout << arrays_fusion;
}

/* 8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo */

void multiply_arrays(){
    int array_elements[] = {1,2,3,4,5};
    int array_result[5];

    for(int i = 0; i < 5; i++){
        array_result[i] = array_elements[i] * 2;
        std :: cout << array_elements[i] << " * " << "2 = " << array_result[i] << std :: endl;
    }
}