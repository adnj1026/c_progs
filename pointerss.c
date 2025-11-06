#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "stringss.h"

/*
basics:
1. Declare a pointer, assign it to a variable, print its value and address.
2. Swap two integers using pointers (no return value).
3. Add two numbers using pointers (pass addresses as function parameters).
4. Find maximum of two numbers using pointers.
5. Demonstrate pointer to pointer (e.g., int **p2 = &p1;).
6. Print address of each element of an array using a pointer.
7. Access array elements using pointer arithmetic(*(arr+i) instead of arr[i]).
8. Reverse an array using pointers only (no [] notation).
9. Count even and odd numbers in an array using pointers.
10. Find the length of a string using a pointer (without strlen()).

intermediate
1.Copy one string to another using pointers.
2.Concatenate two strings using pointers.
3.Compare two strings using pointers (implement strcmp).
4.Implement your own strcpy(), strlen(), and strcat() using pointers.
5.Find largest and smallest elements in an array using pointers.
6.Implement a function that returns a pointer to the largest element.
7.Implement a function that takes a pointer and size and reverses the array in-place.
8.Pass an array of pointers to a function (e.g., array of strings).
9.Use pointer arithmetic to print a 2D array.
10.Implement dynamic array allocation using malloc() and pointers.

hard
1.Allocate memory for n integers using malloc() and free it properly.
2.Write your own version of calloc() using malloc() and memset().
3.Write a function that dynamically allocates memory for a string and returns it.
4.Create a dynamic 2D array using double pointers (int **arr).
5.Resize dynamically allocated memory using realloc().
6.Implement a function to take user input for any number of integers (using realloc() until user stops).
7.Implement a function pointer for basic arithmetic operations (add, subtract, multiply, divide).
8.Use an array of function pointers to perform different operations.
9.Write a function that takes another function pointer as argument and applies it to an array (map-like).
10.Demonstrate pointer to a function returning a pointer.


*/

void pointerassignation(void);
void swap(void);
int add_with_pointers(int* a, int* b);
int max_using_pointers(int* a, int* b);
int* address_of_each_element(int arr[],int* p);
void pointer_pointer(void);
void reverse_array_using_pointers(void);
void count_even_odd_(int arr[], int n);
int length_of_a_string(char arr[]);
void copy_a_string(char str[]);
char* concatenate_strings(char* a, char* b);
int string_compare(char* a, char* b);

void pointerassignation(void){
    char* p = NULL;\
    char s = 'a';
    p = &s;
    printf("address = %p\n",p);
    printf("address = %p\n",&p);
    printf("normal = %d\n",*p);
}

void swap(void){
    int c = 10;
    int d = 20;
    int temp;
    int* q = NULL;
    int* p = NULL;
    p = &c;
    q = &d;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("c = %d\n",c);
    printf("d = %d\n",d);
}

int add_with_pointers(int* a, int* b){
    int sum;
    sum = ((*a) + (*b));
    return sum;

}

int max_using_pointers(int* a, int* b){
    int a1 = *a;
    int b1 = *b;
    if(a1 > b1) return a1;
    else return b1;
}

int* address_of_each_element(int arr[],int* p){
    /*int a[3] = {1,2,3};
    int* p = NULL;
    int* sum = address_of_each_element(a,p);
    for(int i = 0; i < 3; i++)
    printf("%p\n",(sum + i));*/
    p = arr;
    return p;
}

void pointer_pointer(void){
    int a = 99;
    int* p = &a;
    int** q = &p;
    printf("%d\n",**q);
}

void reverse_array_using_pointers(void){
    int n = 10;
    int d[10] = {199,72,33,14,25,63,77,85,49,99};
    char s[12] = "AneeshDatta";
    int* p = d;
    //printf("%d\n",*(p + n - 1 - 0));
    
    char* a = s;
    int temp, i = 0;
    //printf("%c\n",*(a + n - 1 - 0));
    if(n % 2 == 0)
    {
        for(int j = 0; j < (n/2); j++)
        {
            temp = *(p + j);
            *(p + j) = *(p + n - j - 1);
            *(p + n - 1 - j) = temp;
        }
    }
    else
    {
        for(int j = 0; j < ((n-1)/2); j++)
        {
            temp = *(p + j);
            *(p + j) = *(p + n - j - 1);
            *(p + n - j) = temp;
        }
    }
    
    int len = lenghtofstring(s);
    if(len % 2 == 0)
    {
        for(int j = 0; j < (len/2); j++)
        {
            temp = *(a + j);
            *(a + j) = *(a + len-1 - j);
            *(a + len-1 - j) = temp;
        }
    }
    else
    {
        for(int j = 0; j < ((len-1)/2); j++)
        {
            temp = *(a + j);
            *(a + j) = *(a + len-1 - j);
            *(a + len-1 - j) = temp;
        }
    }
    printf("%s\n",s);
    for(int k = 0; k < n; k++){
        printf(" %d ",d[k]);
    }
}

void count_even_odd_(int arr[], int n){
    int* p = arr;
    int count_even = 0,count_odd = 0;
    for(int i = 0; i < n; i++){
        if(*(p + i) % 2 == 0) count_even++;
        else count_odd++;
    }
    printf("the number of even elements are %d\n",count_even);
    printf("the number of odd elements are %d\n",count_odd);

}

int length_of_a_string(char str[]){
    int i = 0, count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

void copy_a_string(char str[]){
    char* p = str;
    int len = length_of_a_string(str);
    char str1[len];
    int i = 0;
    while(*(p + i) < len){
        *(p + i) = str1[i];
        i++;
    }
    printf("the copied string is %s\n",str1);
}

char* concatenate_strings(char* a, char* b){
    int len1 = length_of_a_string(a);
    int len2 = length_of_a_string(b);
    char strr[len1 + len2];
    char* r = strr;
    for(int i = 0; i < (len1); i++){
        strr[i] = *(a + i);
    }
    for(int j = 0; j < len2; j++){
        strr[len1 + j] = *(b + j);
    }
    return r;

}

//return 0	if string1 == string2
//return 1	if string1 > string2
//return-1	if string1 < string2
// comparing lexographically
int string_compare(char* a, char* b){
    int i = 0;
    while(*(a + i) != '\0' && *(b + i) != '\0'){
        if((int)*(a + i) > (int)*(b + i)) return 1;
        else if((int)*(a + i) < (int)*(b + i)) return -1;
        i++;
    }
    return (int)*(a + i) < (int)*(b + i);
}
