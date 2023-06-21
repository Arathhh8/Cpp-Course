#include<iostream>

void while_function();
void do_while_function();
void for_function();

int main(){

    while_function();
    do_while_function();
    for_function();

    return 0;
}

void while_function(){
    int i = 0;

    while (i < 10){
        std :: cout << i << std :: endl;
        i++;
    }
}

void for_function(){
    int i = 0;

    for ( i = 0; i < 10; i++)
    {
        std :: cout << i << std :: endl;
    }
}

void do_while_function(){
    int i = 0;

    do
    {
        i++;
        std :: cout << i << std :: endl;
    } while (i < 9);
    
}