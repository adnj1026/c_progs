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
void inputanarray(void);
void inputtwoarrays(void);
void additionofmatrices(int r, int c, int m1[][c],int p, int q, int m2[][c]);
void multiplicationofmatrices(int r, int c, int m1[][c],int p, int q, int m2[][c]);

int main(){
    printf("FIRST MATRIX\n");
    int c;
    printf("enter number of columns : ");
    scanf("%d",&c);
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r); 
    int m1[r][c];
    printf("enter the elements of a matrix\n");
    for(int i = 0; i < r; i++){
        printf("enter elements in the %d row: ",i);
        for(int j = 0; j < c; j++){
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
    printf("SECOND MATRIX\n");
    int q;
    printf("enter number of columns : ");
    scanf("%d",&q);
    int p;
    printf("enter number of rows : ");
    scanf("%d",&p); 
    int m2[p][q];
    printf("enter the elements of a matrix\n");
    for(int i = 0; i < p; i++){
        printf("enter elements in the %d row: ",i);
        for(int j = 0; j < q; j++){
            scanf("%d",&m2[i][j]);
        }
        printf("\n");
    }
    multiplicationofmatrices(r,c,m1,p,q,m2);
    return 0;
}

void inputanarray(void){
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
}
void inputtwoarrays(void){
    printf("FIRST MATRIX\n");
    int c;
    printf("enter number of columns : ");
    scanf("%d",&c);
    int r;
    printf("enter number of rows : ");
    scanf("%d",&r); 
    int m1[r][c];
    printf("enter the elements of a matrix\n");
    for(int i = 0; i < r; i++){
        printf("enter elements in the %d row: ",i);
        for(int j = 0; j < c; j++){
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
    printf("SECOND MATRIX");
    int q;
    printf("enter number of columns : ");
    scanf("%d",&q);
    int p;
    printf("enter number of rows : ");
    scanf("%d",&p); 
    int m2[p][q];
    printf("enter the elements of a matrix\n");
    for(int i = 0; i < p; i++){
        printf("enter elements in the %d row: ",i);
        for(int j = 0; j < q; j++){
            scanf("%d",&m2[i][j]);
        }
        printf("\n");
    }
}

void displaymatrix(int r, int c, int matrix[][c]){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
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

void additionofmatrices(int r, int c, int m1[][c],int p, int q, int m2[][q]){
    int total[r][c];
    if( r == p && c == q){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < r; j++){
                total[i][j] = m1[i][j] + m2[i][j];
            }
        }
    }
    else
        printf("the function cannot be done");
    printf("the addtion matrix:\n");
    displaymatrix(r,c,total);
}

void multiplicationofmatrices(int r, int c, int m1[][c],int p, int q, int m2[][q]){
    int total[r][q];
    if( p == c){
        for(int i = 0; i < r; i++ ){
            for(int j = 0; j < q; j++){
                total[i][j] = 0;
                for(int k = 0; k < p; k++ ){
                    total[i][j] += (m1[i][k] * m2[k][j]);
                }
            }
        }
        
        printf("the mutiplicaton matrix:\n");
        displaymatrix(r,q,total);
    }
    else
        printf("the function cannot be done\n");
    
}