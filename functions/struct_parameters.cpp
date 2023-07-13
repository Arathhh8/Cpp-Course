#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

void modifyPerson(Person& p) {
    p.name = "John Doe";
    p.age = 30;
}

void printPerson(const Person& p) {
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Age: " << p.age << std::endl;
}

int main() {
    Person myPerson;
    myPerson.name = "Jane Smith";
    myPerson.age = 25;

    printPerson(myPerson);  // Imprime los valores originales

    modifyPerson(myPerson); // Modifica la estructura

    printPerson(myPerson);  // Imprime los valores modificados

    return 0;
}
