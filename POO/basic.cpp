// Clases en C++

#include<iostream>
#include<stdlib.h>

class Person{
    private: // Atributos
        int age;
        std :: string name;
    
    public: // Métodos
        Person(int, std :: string); //Constructor
        void read();
        void run();
};

// Constructor, nos sirve para inicializar los atributos de la clase
Person :: Person(int _age, std :: string _name){
    age = _age;
    name = _name;
}

void Person :: read(){
    std :: cout << "Soy " << name << " y estoy leyendo" << std :: endl;
}

void Person :: run(){
    std :: cout << "Soy " << name << " tengo " << age << " anios y estoy corriendo" << std :: endl;
}

int main(){
    Person person_1 = Person(20, "Arath");
    Person person_2(21, "Clau");

    person_1.run();
    person_2.read();

    return 0;
}