/*
Contiene uso de estructuras condicionales como if, else, switch
*/

#include<iostream>

void if_function();
void switch_function();

int main(){

    if_function();
    switch_function();

    return 0;
}

void if_function(){
    int num;

    std :: cout << "Digite un numero: "; std :: cin >> num;

    if(num == 5){
        std :: cout << "El numero es 5" << std :: endl;
    }else{
        std :: cout << "El numero no es 5" << std :: endl;
    }
}

void switch_function(){

    int num;

    std :: cout << "Digite un numero entre 1 y 5: "; std :: cin >> num;

    switch (num){
        case 1: std :: cout << "Es el numero 1";
        break;
        case 2: std :: cout << "Es el numero 2";
        break;
        case 3: std :: cout << "Es el numero 3";
        break;
        case 4: std :: cout << "Es el numero 4";
        break;
        case 5: std :: cout << "Es el numero 5";
        break;
        default: std :: cout << "No esta en el rango especificado";
        break;
    }
}