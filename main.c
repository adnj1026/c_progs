
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#include "arrays.h"
#include "pointerss.h"
#include "progs.h"
#include "stringss.h"
#include "twod.h"


int main(){
    char str[26] = "Aneesh Datta Nagaraju Jois";
    longestword(str);
    return 0;
}


/*

int main(){
    
    int n;
    printf("please choose what programs you want to execute\n");
    printf("1. string programs\n");
    printf("2. pointer programs\n");
    printf("3. array programs\n");
    printf("4. basic programs\n");
    printf("5. two dimensional array programs\n");
    scanf("%d",&n);
    switch(n){
        case 1:{
            int n;
            printf("select what you want to perform:\n");
            printf("1.return the length of a string\n");
            printf("2.copy a string\n");
            printf("3.concatenate strings\n");
            printf("4.compare strings\n");
            printf("5.copy n characters from destination to source\n");
            printf("6.concatenate n characters from destination to source\n");
            printf("7.first occurance of a character in the string\n");
            printf("8.first occurance of substring in the string\n");
            printf("9.convert upper case to lowercase\n");
            printf("10.count vowels consonants digits and spaces\n");
            printf("11.count number of words in a sentence\n");
            printf("12.reverse a sting\n");
            printf("13.check if the string is palindrome\n");
            printf("14.remove all spaces\n");
            printf("15.count frequency of each character\n");
            printf("16.find the first non repeating character\n");
            printf("17.remove all duplicate characters\n");
            printf("18.reverse each word in a sentence\n");
            printf("19.check if two strings are anagrams\n");
            printf("20.find longest word in a sentence\n");
            printf("21.compress a string\n");
            printf("22.check if a string is rotation of another\n");
            printf("23.longest palindrome substring\n");
            printf("24.convert string to integer\n");
            printf("25.convert integer to string\n");
            printf("26.find all permutations of a string\n");
            printf("27.pattern matching with wild cards\n");
            printf("28.Remove all occurrences of a substring from a string\n");
            printf("29.Word wrap (split text into lines of max length k)\n");
            printf("30.Find smallest and largest word in a string\n");
            switch(n){
                case 1:{
                    char *str = NULL;
                    int size = 0;
                    int ch;

                    printf("Enter a string: ");

                    while ((ch = getchar()) != '\n' && ch != EOF) {
                        char *temp = realloc(str, size + 2); // 
                        if (temp == NULL) {
                            free(str);
                            printf("Memory allocation failed!\n");
                            return 1;
                        }
                        str = temp;
                        str[size++] = (char)ch;
                    }
                    if (str == NULL) {
                        printf("No input entered.\n");
                        return 0;
                    }
                    str[size] = '\0'; 
                    int len = lenghtofstring(str);
                    printf("the length is %d\n",len);
                    free(str);
                    break;
                }
                case 2:{
                    char *str1 = NULL;
                    int size = 0;
                    int ch;

                    printf("Enter fisrt string: ");

                    while ((ch = getchar()) != '\n' && ch != EOF) {
                        char *temp = realloc(str1, size + 2); 
                        if (temp == NULL) {
                            free(str1);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str1 = temp;
                        str1[size++] = (char)ch;
                    }
                    if (str1 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str1[size] = '\0'; 

                    char *str2 = NULL;
                    int size2 = 0;
                    int ch2;
                    printf("Enter second string: ");
                    while ((ch2 = getchar()) != '\n' && ch2 != EOF) {
                        char *temp = realloc(str2, size2 + 2); 
                        if (temp == NULL) {
                            free(str2);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str2 = temp;
                        str2[size2++] = (char)ch2;
                    }
                    if (str2 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str2[size] = '\0'; 
                    copyastring(str1,str2);
                    free(str1);
                    free(str2);
                    break;
                }
                case 3: {
                                        char *str1 = NULL;
                    int size = 0;
                    int ch;

                    printf("Enter fisrt string: ");

                    while ((ch = getchar()) != '\n' && ch != EOF) {
                        char *temp = realloc(str1, size + 2); 
                        if (temp == NULL) {
                            free(str1);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str1 = temp;
                        str1[size++] = (char)ch;
                    }
                    if (str1 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str1[size] = '\0'; 

                    char *str2 = NULL;
                    int size2 = 0;
                    int ch2;
                    printf("Enter second string: ");
                    while ((ch2 = getchar()) != '\n' && ch2 != EOF) {
                        char *temp = realloc(str2, size2 + 2); 
                        if (temp == NULL) {
                            free(str2);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str2 = temp;
                        str2[size2++] = (char)ch2;
                    }
                    if (str2 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str2[size] = '\0'; 
                    concatenatestrings(str1,str2);
                    free(str1);
                    free(str2);
                    break;
                }
                case 4: {
                                        char *str1 = NULL;
                    int size = 0;
                    int ch;

                    printf("Enter fisrt string: ");

                    while ((ch = getchar()) != '\n' && ch != EOF) {
                        char *temp = realloc(str1, size + 2); 
                        if (temp == NULL) {
                            free(str1);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str1 = temp;
                        str1[size++] = (char)ch;
                    }
                    if (str1 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str1[size] = '\0'; 

                    char *str2 = NULL;
                    int size2 = 0;
                    int ch2;
                    printf("Enter second string: ");
                    while ((ch2 = getchar()) != '\n' && ch2 != EOF) {
                        char *temp = realloc(str2, size2 + 2); 
                        if (temp == NULL) {
                            free(str2);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str2 = temp;
                        str2[size2++] = (char)ch2;
                    }
                    if (str2 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str2[size] = '\0'; 
                    comparestrings(str1,str2);
                    free(str1);
                    free(str2);
                    break;
                }
                case 5:{
                                        char *str1 = NULL;
                    int size = 0;
                    int ch;

                    printf("Enter fisrt string: ");

                    while ((ch = getchar()) != '\n' && ch != EOF) {
                        char *temp = realloc(str1, size + 2); 
                        if (temp == NULL) {
                            free(str1);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str1 = temp;
                        str1[size++] = (char)ch;
                    }
                    if (str1 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str1[size] = '\0'; 

                    char *str2 = NULL;
                    int size2 = 0;
                    int ch2;
                    printf("Enter second string: ");
                    while ((ch2 = getchar()) != '\n' && ch2 != EOF) {
                        char *temp = realloc(str2, size2 + 2); 
                        if (temp == NULL) {
                            free(str2);
                            printf("Memory allocation failed!\n");
                            //return 1;
                        }
                        str2 = temp;
                        str2[size2++] = (char)ch2;
                    }
                    if (str2 == NULL) {
                        printf("No input entered.\n");
                        //return 0;
                    }
                    str2[size] = '\0'; 
                    int num;
                    printf("enter a number of character to copy: ",num);
                    stringcopyy(str1,str2,num);
                    free(str1);
                    free(str2);
                    break;
                }
                case 6:{

                }

            }
            break;
        }
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
    }
    return 0;
}

*/


