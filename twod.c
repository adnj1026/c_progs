/*
1.input and print a matrix
2. sum of all elements in matrix
3. matrix addition
4. matrix multiplication
5. matrix transpose
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void displaymatrix(int r, int c, int matrix[][c]);

int main(){
    int c;
    printf("enter number of columns : ");
    scanf("%d",&c);
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r); 
    int matrix[r][c];
    printf("enter the elements of a matrix\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("enter %d column element in the %d row: ",j,i);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    displaymatrix(r,c,matrix);
    return 0;
}

void displaymatrix(int r, int c, int matrix[][c]){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}