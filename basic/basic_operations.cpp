#include <iostream>
void basic_operations_refactor();

int main(){
    int num1, num2, mult, div, sum, rest;

    std :: cout << "Digite un numero: "; std :: cin >> num1;
    std :: cout << "Digite un numero: "; std :: cin >> num2;

    sum = num1 + num2;
    rest = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    std :: cout << num1 << "+" << num2 << "=" << sum << std :: endl;
    std :: cout << num1 << "-" << num2 << "=" << rest << std :: endl;
    std :: cout << num1 << "*" << num2 << "=" << mult << std :: endl;
    std :: cout << num1 << "/" << num2 << "=" << div << std :: endl;

    basic_operations_refactor();

    return 0;

}

void basic_operations_refactor() {
    int num[2];

    for (int i = 0; i < 2; ++i) {
        std::cout << "Digite un numero: ";
        std::cin >> num[i];
    }

    std::string operators[] = { "+", "-", "*", "/" };
    int results[] = {
        num[0] + num[1],
        num[0] - num[1],
        num[0] * num[1],
        num[0] / num[1]
    };

    for (int i = 0; i < 4; ++i) {
        std::cout << num[0] << operators[i] << num[1] << "=" << results[i] << std::endl;
    }

}
