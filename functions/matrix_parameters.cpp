// Paso de parámetros de tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>

void matrix_show(int matrix[][3], int rows_number, int cols_number);
void square_matrix_calculate(int matrix[][3], int rows_number, int cols_number);
void square_matrix_show(int matrix[][3], int rows_number, int cols_number);

int main(){

    const int rows_number = 2, cols_number = 3;

    int matrix[rows_number][cols_number] = {{1,2,3},{4,5,6}};

    matrix_show(matrix, rows_number, cols_number);
    square_matrix_calculate(matrix, rows_number, cols_number);
    matrix_show(matrix, rows_number, cols_number);
    //square_matrix_show(matrix, rows_number, cols_number);

    return 0;
}

void matrix_show(int matrix[][3], int rows_number, int cols_number){

    std :: cout << "Mostrando matriz original:\n";

    for(int i = 0; i < rows_number; i++){
        for(int j = 0; j < cols_number; j++){
            std :: cout << matrix[i][j] << " ";
        }
        std :: cout << "\n";
    }
}

void square_matrix_calculate(int matrix[][3], int rows_number, int cols_number){
    for(int i = 0; i < rows_number; i++){
        for(int j = 0; j < cols_number; j++){
            matrix[i][j] *= matrix[i][j];
        }
    }
}

void square_matrix_show(int matrix[][3], int rows_number, int cols_number){
    for(int i = 0; i < rows_number; i++){
        for(int j = 0; j < cols_number; j++){
            std :: cout << matrix[i][j];
        }
        std :: cout << "\n";
    }
}