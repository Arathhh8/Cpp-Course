/*1. Intercambiar el valor de 2 variables utilizando paso de parámtetros por referencia*/
#include<iostream>

void values_change(int& first_num, int& second_num);

int main(){

    int first_num, second_num;

    std :: cout <<"Escribe el primer numero: "; std :: cin >> first_num;
    std :: cout <<"Escribe el segundo numero: "; std :: cin >> second_num;

    std :: cout <<"El primer numero es: " << first_num << std :: endl;
    std :: cout <<"El segundo numero es: " << second_num << std :: endl;

    values_change(first_num, second_num);

    std :: cout <<"El nuevo primer numero es: " << first_num << std :: endl;
    std :: cout <<"El nuevo segundo es: " << second_num << std :: endl;

    return 0;
}

void values_change(int& first_num, int& second_num){

    first_num = 10;
    second_num = 20;

}