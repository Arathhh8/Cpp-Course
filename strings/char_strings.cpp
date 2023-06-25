#include<iostream>
#include<string.h>

void first_string();
void gets_string();
void strlen_function();

int main(){

    //first_string();
    //gets_string();
    strlen_function();

    return 0;

}

void first_string(){
    char word[] = "Arath";
    char word_2[] = {'A','R','A','T','H','\0'};

    std :: cout << word << std :: endl;
    std :: cout << word_2 << std :: endl;

}

void gets_string(){
    char word[] = "Arath";
    char word_2[] = {'A','R','A','T','H','\0'};
    char name[30];

    std :: cout << "Digite su nombre: ";
    std :: cin.getline(name,9);

    std :: cout << name;

}

void strlen_function(){

    char name[] = "Arath Garcia";
    int lenght_name = 0;
    lenght_name =  strlen(name);

    std :: cout << lenght_name;
}