//write a program to add 2 3x3 matrix and store the result in another 3x3 matrix.Q2
//Q3.write a program to find the sum of the rows of a matrix 
//Q4.write a program for matrix multiplication

#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate and display the sum of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, sum);
    }
    
    return 0;
}