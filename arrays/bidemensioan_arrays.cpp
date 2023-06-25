#include<iostream>

void fill_matrix_by_user();
void copy_matrix_to_matrix();

int main(){

    //fill_matrix_by_user();
    copy_matrix_to_matrix();

    return 0;
}

/* 1. Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, posteriormente mostrar la matriz en pantalla */

void fill_matrix_by_user(){

    int rows_num = 0, col_num = 0;

    std :: cout << "Cuantas filas deseas que tenga la matriz: "; std :: cin >> rows_num;
    std :: cout << "Cuantas columnas deseas que tenga la matriz: "; std :: cin >> col_num;

    int matrix[rows_num][col_num];

    for(int i = 0; i < rows_num; i++){
        for(int j = 0; j < col_num; j++){
            matrix[i][j] = j+1; 
        }
    }

    for(int i = 0; i < rows_num; i++){
        for(int j = 0; j < col_num; j++){
           std :: cout << matrix[i][j]; 
        }
        std :: cout << "\n";
    } 
}

/* 3. Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz */

void copy_matrix_to_matrix(){
    int matrix[2][2] ={2,2,
                       3,3};
    int matrix_copy[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrix_copy[i][j] = matrix[i][j];
            std :: cout << matrix_copy[i][j];
        }
        std :: cout << "\n";
    }
}