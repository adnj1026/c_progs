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
void sumofelementsmatrix(int r, int c, int matrix[][c]);

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
        printf("enter elements in the %d row: ",i);
        for(int j = 0; j < c; j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    sumofelementsmatrix(r,c,matrix);
    return 0;
}

void displaymatrix(int r, int c, int matrix[][c]){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf(" %d ",matrix[i][j]);
        }
    }
}


void sumofelementsmatrix(int r, int c, int matrix[][c]){
    int total = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            total = total + matrix[i][j];
        }
    }
    printf("the total of all elements is %d",total);
}