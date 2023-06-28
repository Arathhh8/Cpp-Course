/*1. Encontrar el mayor de dos números */

#include<iostream>

int bigger_two_num(int num1, int num2);

int main(){

    int result = 0, num1 = 0, num2 = 0;

    std :: cout << "Digite numero 1: "; std :: cin >> num1;
    std :: cout << "Digite numero 2: "; std :: cin >> num2;
    
    result = bigger_two_num(num1,num2);
    std :: cout << result;
    return 0;
}

int bigger_two_num(int num1, int num2){

    int bigger_num = 0;

    if(num1 > num2){
        bigger_num = num1;
    }else{
        bigger_num = num2;
    }

    return bigger_num;
}