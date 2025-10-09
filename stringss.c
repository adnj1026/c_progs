#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
//#include <string.h>

/*
<string.h> replicas:
1. return the length of a string
2. copy a string
3. concatenate strings
4. comapare strings
5. copy n characters from destination to source
6. concatenate n characters from destination to source
7. first occurance of a character in the string
8. first occurance of substring in the string

Basic programs:
1. convert upper case to lowercase
2. count vowels consonants digits and spaces
3. count number of words in a sentence
4. reverse a sting
5. check if the string is palindrome

intermediate progs:
1. remove all spaces
2. count frequency of each character
3. find the first non repeating character
4. remove all duplicate characters
5. reverse each word in a sentence
6. check if two strings are anagrams
7. find longest word in a sentence
8. check if one string is a substring of another

hard progs:
1. compress a string
2. check if a string is rotation of another\
3. longest palindrome substring
4. convert string to integer
5. convert integer to string
6. find all permutations of a string
7. pattern matching with wild cards
8. Remove all occurrences of a substring from a string
9. Word wrap (split text into lines of max length k)
10. Find smallest and largest word in a string
*/

void stringinputdynamic(void);
void basicstringinput(void);
void input2strings(void);
int lenghtofstring(char str[]);
void copyastring(char source[],char dest[]);
void concatenatestrings(char str1[],char str2[]);

int main(){
    char *str1 = NULL;
    int size = 0;
    int ch;

    printf("Enter fisrt string: ");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        char *temp = realloc(str1, size + 2); 
        if (temp == NULL) {
            free(str1);
            printf("Memory allocation failed!\n");
            return 1;
        }
        str1 = temp;
        str1[size++] = (char)ch;
    }
    if (str1 == NULL) {
        printf("No input entered.\n");
        return 0;
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
            return 1;
        }
        str2 = temp;
        str2[size2++] = (char)ch2;
    }
    if (str2 == NULL) {
        printf("No input entered.\n");
        return 0;
    }
    str2[size2] = '\0'; 
    concatenatestrings(str1,str2);
    free(str1);
    free(str2);
    return 0;
}
// for my reference
void input2strings(void){
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
    free(str1);
    free(str2);
}
//for my reference
void stringinputdynamic(void){
    
    char *str = NULL;
    int size = 0;
    int ch;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        char *temp = realloc(str, size + 2); // 
        if (temp == NULL) {
            free(str);
            printf("Memory allocation failed!\n");
            //return 1;
        }
        str = temp;
        str[size++] = (char)ch;
    }
    if (str == NULL) {
        printf("No input entered.\n");
        //return 0;
    }
    str[size] = '\0'; 
    free(str);
    //return 0;
}
//for my reference
void basicstringinput(void){
    char str[20];
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("entered string is: %s",str);
}

int lenghtofstring(char str[]){
    int i = 0;
    while(str[i] != '\0'){
            i++;
    }
    //printf("the length of str is %d\n",i);
    return i;
}

void copyastring(char source[],char dest[]){
    int len = lenghtofstring(source);
    int len1 = lenghtofstring(dest);
    //char dest[len];
    for(int i = 0; i <= len ; i ++){
        dest[i] = source[i];
    }
    printf("the copied string is %s",dest);

}

void concatenatestrings(char str1[],char str2[]){
    int len1 = lenghtofstring(str1);
    int len2 = lenghtofstring(str2);
    char con[len1+len2];
    int j = 0;
    for(int i = 0; i < (len1+len2); i++){
        if(i < len1){
            con[i] = str1[i];
        }
        else{
            con[len1 + j] = str2[j];
            j++;
        }
    }
    printf("the string is %s",con);
}

