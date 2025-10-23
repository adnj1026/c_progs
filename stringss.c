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
4. compare strings
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
void comparestrings(char str1[],char str2[]);
void stringcopyy(char src[],char dest[],int n);
void stringconcat(char src[], char dest[], int n);
void firstoccuranceinstring(char str[],int c);
void firstoccurancesubstring(char str[],char str1[]);
void uppertolowercase(char str[]);
void countallthings(char str[]);
void countwords(char str[]);
void reversestring(char str[]);
void palindromestring(char str[]);
void removeallspaces(char str[]);
void frequencyofcharacters(char str[]);
void removeduplicates(char str[]);
int main(){
    char str[40] = "aneesh";
    char dest[100] = "abcdefghijklmnopqrstuvwxyz";
    char n[20] = "aoi";
    char strr[50] = "aneeshdattanagarajujoiscblhadamm";
    /*************************************************/
    removeduplicates(strr);
    /*************************************************/
   
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
    //con = [len1+len2] = '\0';
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


void comparestrings(char str1[],char str2[]){
    int len1 = lenghtofstring(str1);
    int len2 = lenghtofstring(str2);
    if(len1 == len2){
        for(int i = 0; i < len1; i++){
            if(str1[i] != str2[i]){
                printf("two strings are not the same\n");
                break;
            }
            else{
                printf("the two strings are the same");
                break;
            }
        }
    }
    else
        printf("the two strings are not the same");
}

void stringcopyy(char src[],char dest[],int n){
    int len1 = lenghtofstring(src);
    int i = 0;
    while(i < n){
        dest[i] = src[i];
        i++;
    }
    dest[n] = '\0';
    printf("%s ",dest);
}

void stringconcat(char src[], char dest[], int n){
    int len1 = lenghtofstring(src);
    int len2 = lenghtofstring(dest);
    int i = 0;
    if(n < len1)
        src[n] = '\0';
    else
        printf("cannot be performed");
    printf("%s \n",src);
    printf("%s \n",dest);
    concatenatestrings(dest,src);

}

void firstoccuranceinstring(char str[],int c){
    int len1 = lenghtofstring(str);
    int i = 0;
    while(i < len1){
        if(str[i] == c)
            break;
        i++;
    }
    printf("the first occurance of the character is in the %d position\n",i+1);
}

void firstoccurancesubstring(char str[],char str1[]){
    int len1 = lenghtofstring(str);
    int len2 = lenghtofstring(str1);
    int i = 0,k = 0,j = 0;
    while(i < len1){
        if(str[i] != str1[k] ){
            i++;
        }
        else{
            if(k == len2-1){
                printf("the substring starts at the %d position\n",i - len2 + 2);
                break;
            }
            k++;
            i++;
        }
    }
}

void uppertolowercase(char str[]){
    int len = lenghtofstring(str);
    int i = 0;
    while(str[i] >= 97 && str[i] <= 122){
        str[i] = str[i] - 32;
        i++;
    }
    printf("the modified string is %s",str);
}

void countallthings(char str[]){
    int vowels=0,digits=0,space=0,consonants=0;
    int len = lenghtofstring(str);
    for(int i = 0; i < len; i++){
        if(str[i] == 32)
            space++;
        else if(str[i] >= 48 && str[i] <= 57)
            digits++;
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
        else if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else 
            consonants++;
    }
    printf("digits = %d\n",digits);
    printf("spaces = %d\n",space);
    printf("vowels = %d\n",vowels);
    printf("consonant = %d\n",consonants);
}

void countwords(char str[]){
    int words = 0;
    int len = lenghtofstring(str);
    for(int i = 0; i <= len; i++){
        if(str[i] == 32 || str[i] == '\0')
            words++;
    }
    printf("the number of words are %d\n",words);
}

void reversestring(char str[]){
    int len = lenghtofstring(str);
    int temp;
    if(len % 2 == 0){
        for(int i = 0; i < (len/2); i++){
            temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
    }
    else{
        for(int i = 0; i < ((len-1)/2); i++){
            temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
    }
    printf("the reversed string is: %s\n",str);
}

void palindromestring(char str[]){
    int len = lenghtofstring(str);
    int temp;
    if(len % 2 == 0){
        for(int i = 0; i < (len/2); i++){
            if(str[i] != str[len - 1 - i]){
                printf("the string is not a palindrome");
                break;
            }
            else{
                if(i == (len/2)-1)
                    printf("it is a palindrome");
                else 
                    continue;
            }
        }
    }

    else{
        for(int i = 0; i < ((len-1)/2); i++){
            if(str[i] != str[len - 1 - i]){
                printf("the string is not a palindrome");
                break;
            }
            else{
                if(i == ((len-1)/2)-1)
                    printf("it is a palindrome");
                else 
                    continue;
            }
        }
    }
}

void removeallspaces(char str[]){
    int len = lenghtofstring(str);
    char strr[len];
    int i = 0;
    int k = 0;
    while(i < len){
        if(str[i] != 32){
            strr[k] = str[i];
            k++;
            i++;
        }
        else
            i++;
    }
    strr[k] = '\0';
    printf("the string with removed spaces is %s\n",strr);
}

void frequencyofcharacters(char str[]){
    int len = lenghtofstring(str);
    int i = 97,j = 0,count = 0;
    while(i >= 97 && i <= 122){
        while(j <= (len - 1)){
            if(str[j] == i)
                count++;
            j++;
        }
        if(count != 0)
            printf("the element %c is repeated %d times\n",i,count);
        i++;
        count = 0;
        j = 0;
    }
}

void removeduplicates(char str[]){
    int len = lenghtofstring(str);
    int count = 0,k = 0, l = 0, j = 0,m = 0;
    char strr[len];
    char temp[len];
    strr[len] = '\0';
    while(j < len){
        count = 0;
        l = 0;
        while(l < len){
            if(str[j] == str[l]){
                count++;
                l++;
                
            }
            else 
                l++;
        }
        
        if(count > 1){
            temp[m] = str[j];
            m++;
        }
        if(count == 1){
            strr[k] = str[j];
            k++;
        }
        
    j++;   
    }
    if(len != k){
        strr[k] = '\0';
        temp[m] = '\0';
    }
    printf("new string with removed dups: %s\n",strr);
    //printf("string dups: %s\n",temp);
}