#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

/*
1. display and output an array
2. read array elements and find their sum
3. find max and min in array
4. count even and odd numbers
5. reverse an array
6. search second largest element
7. copy array(elements of one array to another
8. remove duplicate elements
9. merge two arrys
10. bubble sort
11. selection sort
*/

void inputofanarray(void);
void inputtwoarrays(void);
void arraysum(int arr[], int n);
void displayarray(int arr[], int n);
void maxandminarray(int arr[], int n);
void countevenandoddarray(int arr[],int n);
void reversearray(int arr[],int n);
void linearsearch(int arr[], int n);
void secondlargestelement(int arr[], int n);
void removeduplicates(int arr[],int n);
int* copyarray(int arr[],int n);
void mergetwoarrays(int arr1[],int n1,int arr2[],int n2);
void bubblesort(int arr[],int n);
void selectionsort(int arr[],int n);
int issorted(int arr[],int n);
void standardbubblesort(int arr[], int n);
void standard_selectionsort(int arr[], int n);

int main(){
    int n;
    printf("enter no of elements of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array ");
    for(int i = 0; i<n; i++)
        scanf("%d",&arr[i]);
    standard_selectionsort(arr,n);
    return 0;
}

void inputofanarray(void){
    int n;
    printf("enter no of elements of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array ");
    for(int i = 0; i<n; i++)
        scanf("%d",&arr[i]);
}

void inputtwoarrays(void){
    int n1,n2;
    int arr1[n1],arr2[n2];
    printf("please enter the number of elements in the first array: ");
    scanf("%d",n1);
    printf("enter the elements of the first array: ");
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("please enter the number of elements in the second array: ");
    scanf("%d",n2);
    printf("enter the elements of the second array: ");
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
}

void displayarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(i == 0){
            printf("[");
            printf("%d ",arr[i]);
        }
        else if( i == n-1){
             printf("%d",arr[i]);
             printf("]");
        }
        else
            printf("%d ",arr[i]);
    }
}
void arraysum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n ; i++)
        sum = sum + arr[i];
    printf("the sum of the array is %d",sum);
}
void maxandminarray(int arr[], int n){
    int max=0,min=0;
    min = arr[0];
    max = arr[0];
    for(int i = 0; i < n ; i++){
        if(arr[i]==max || arr[i] == min)
            continue;
        else if(arr[i]>max)
            max = arr[i];
        else if(arr[i]<min)
            min = arr[i];
    }
    printf("the min is %d\n",min);
    printf("the max is %d",max);
}

void countevenandoddarray(int arr[],int n){
   int count_even=0,count_odd=0;
    for(int i = 0; i < n ; i++){
        if(arr[i] % 2 ==0)
            count_even += 1;
        else
            count_odd += 1;
    }
    printf("the oddcount is %d\n",count_odd);
    printf("the evencount is %d",count_even);
} 

void reversearray(int arr[],int n){
    int temp;
    for(int i = 0; i < n ; i++){
        if(n % 2 == 0 && i > (n/2)-1)
            break;
        else if(n%2 != 0 && i > (n-1)/2)
            break;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("the reversed arrray is \n");
    displayarray(arr,n);
}

void linearsearch(int arr[], int n){
    int number,count = 0;
    printf("enter the element to be searched:");
    scanf("%d",&number);
    for(int i = 0; i < n; i++){
        if(arr[i] == number){
            count = count + 1;
            printf("the number is in %dth position\n",i+1);
        }
    }
    if(count < 1)
        printf("no elements were found in the array");
}
  
void secondlargestelement(int arr[], int n){
    int max=0; 
    int min=0;
    max = arr[0];
    min = arr[0];
    for(int i = 0; i < n ; i++){
        if(arr[i]==max || arr[i] == min)
            continue;
        else if(arr[i]>max)
            max = arr[i];
        else if(arr[i]<min)
            min = arr[i];
    }
    int second;
    second = arr[0];
    for(int j = 0; j < n; j++){
        if(arr[j] > min && arr[j] < max){
            second = arr[j];
            min = second;
        }
    }
    printf("the second largest %d \n", second);
}

int* copyarray(int arr[],int n){
    int* dest = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) 
        dest[i] = arr[i];
    return dest;
}


void removeduplicates(int arr[],int n){
    int temp;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;
            else if(arr[i] == arr[j]){
                arr[j] = -55;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] == -55)
            count++;
    }
    int real = n - count;
    int arr2[real];
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != -55 && j < real){
            arr2[j] = arr[i];
            j++;
        }
            
    }
    displayarray(arr2,real);
    printf("\n");  
}

void mergetwoarrays(int arr1[], int n1, int arr2[], int n2){
    int total = n1 + n2;
    int totalarr[total];
    for(int i = 0; i < n1; i++)
        totalarr[i] = arr1[i];
    for(int j = 0; j < n2; j++)
        totalarr[n1 + j] = arr2[j];
    displayarray(totalarr,total);
    printf("\n");  
}

int issorted(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i + 1])
            continue;
        else
            return 0;
    }
    return 1;
}
void bubblesort(int arr[],int n){
    int temp;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    if(issorted(arr,n) == 1)
        displayarray(arr,n);
    else   
        bubblesort(arr,n);
}

void standardbubblesort(int arr[], int n) {
    int temp;
    int swapped;
    for (int pass = 0; pass < n - 1; pass++) {
        swapped = 0;
        for (int i = 0; i < n - pass - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)   
            break;
    }
    displayarray(arr, n);
}


void selectionsort(int arr[],int n){
    int temp,min;
    int count = 0;
    for(int j = 0; j < n - 1; j++){
        for(int i = j; i < n; i++){
            if(arr[i] < arr[j]){
                temp = arr[j];
                arr[j] = arr[i]; 
                arr[i] = temp;         
            }    
        }  
    }
    displayarray(arr,n);
}

void standard_selectionsort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        // assume the first element of unsorted part is the min
        minIndex = i;

        // find the index of the minimum element
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap the found minimum with arr[i]
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    displayarray(arr,n);
}
