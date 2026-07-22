#include<iostream>

// Multi-dimensional Dynamic Array using Pointer

int main() 
{
    int rows, cols;

    std::cout << "Enter no. of rows: ";
    std::cin >> rows;
    std::cout << "Enter no. of cols: ";
    std::cin >> cols;

    // Allocate rows
    int** table = new int*[rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];   // allocate each row
    }

    // Fill values
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) {
            std::cout << "table[" << i << "][" << j <<"]: ";
            std::cin >> table[i][j];
        }
    }

    // Print values
    std::cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << table[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free Memory
    for (int i=0; i<rows; i++)
        delete[] table[i];

    // Delete table
    delete[] table;

    return 0;
}